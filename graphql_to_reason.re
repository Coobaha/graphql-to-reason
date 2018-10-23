open Core;

let json_file_path =
  Command.Spec.Arg_type.create(filename =>
    switch (Sys.is_file(filename)) {
    | `Yes =>
      switch (Caml.Filename.extension(filename)) {
      | ".json" => filename
      | _ =>
        eprintf("'%s' is not a json file.\n%!", filename);
        exit(1);
      }
    | `No
    | `Unknown =>
      eprintf("'%s' is not a regular file.\n%!", filename);
      exit(1);
    }
  );

let output = (~outputFiles, ~result) => {
  let (formatter, oc) =
    switch (outputFiles) {
    | [target, ...rest] =>
      let oc = Out_channel.create(target);
      (Format.formatter_of_out_channel(oc), Some(oc));
    | _ => (Format.std_formatter, None)
    };

  Reason_toolchain.RE.print_implementation_with_comments(formatter, result);

  Format.print_flush();

  switch (oc) {
  | Some(oc) => Out_channel.close(oc)
  | None => ()
  };
};

let fromFile =
  Command.Let_syntax.(
    Command.basic(
      ~summary="generate reason types from graphql_schema.json",
      {
        let%map_open filepath = anon("filepath" %: json_file_path)
        and outputFiles = anon(sequence("output_path" %: file));
        () => {
          let result =
            Lib.(
              SchemaRead.File(filepath)
              |> SchemaRead.read
              |> SchemaPrint.print
            );
          output(~outputFiles, ~result);
        };
      },
    )
  );

Command.run(~build_info="", fromFile);
