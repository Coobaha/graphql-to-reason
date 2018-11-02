include SchemaTypes_builder.MakeSchema({
  module Scalars = {};
  type resolver('args, 'fieldType, 'result) =
    (unit, 'args) => Js.Promise.t('result);
  type directiveResolver('payload);
});

