module type SchemaConfig = {
  module Scalars: {
    type jsonb;
    type timestamptz;
  };
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type rootResolver('payload, 'fieldType, 'result) =
    Config.resolver(unit, 'payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  [@bs.deriving {jsConverter: newType}]
  type conflict_action = [
    | [@bs.as "ignore"] `ignore
    | [@bs.as "update"] `update
  ];
  [@bs.deriving {jsConverter: newType}]
  type user_order_by = [
    | [@bs.as "avatar_asc"] `avatar_asc
    | [@bs.as "avatar_asc_nulls_first"] `avatar_asc_nulls_first
    | [@bs.as "avatar_desc"] `avatar_desc
    | [@bs.as "avatar_desc_nulls_first"] `avatar_desc_nulls_first
    | [@bs.as "created_at_asc"] `created_at_asc
    | [@bs.as "created_at_asc_nulls_first"] `created_at_asc_nulls_first
    | [@bs.as "created_at_desc"] `created_at_desc
    | [@bs.as "created_at_desc_nulls_first"] `created_at_desc_nulls_first
    | [@bs.as "email_asc"] `email_asc
    | [@bs.as "email_asc_nulls_first"] `email_asc_nulls_first
    | [@bs.as "email_desc"] `email_desc
    | [@bs.as "email_desc_nulls_first"] `email_desc_nulls_first
    | [@bs.as "id_asc"] `id_asc
    | [@bs.as "id_asc_nulls_first"] `id_asc_nulls_first
    | [@bs.as "id_desc"] `id_desc
    | [@bs.as "id_desc_nulls_first"] `id_desc_nulls_first
    | [@bs.as "name_asc"] `name_asc
    | [@bs.as "name_asc_nulls_first"] `name_asc_nulls_first
    | [@bs.as "name_desc"] `name_desc
    | [@bs.as "name_desc_nulls_first"] `name_desc_nulls_first
    | [@bs.as "updated_at_asc"] `updated_at_asc
    | [@bs.as "updated_at_asc_nulls_first"] `updated_at_asc_nulls_first
    | [@bs.as "updated_at_desc"] `updated_at_desc
    | [@bs.as "updated_at_desc_nulls_first"] `updated_at_desc_nulls_first
    | [@bs.as "username_asc"] `username_asc
    | [@bs.as "username_asc_nulls_first"] `username_asc_nulls_first
    | [@bs.as "username_desc"] `username_desc
    | [@bs.as "username_desc_nulls_first"] `username_desc_nulls_first
  ];
  [@bs.deriving {jsConverter: newType}]
  type note_revision_order_by = [
    | [@bs.as "created_at_asc"] `created_at_asc
    | [@bs.as "created_at_asc_nulls_first"] `created_at_asc_nulls_first
    | [@bs.as "created_at_desc"] `created_at_desc
    | [@bs.as "created_at_desc_nulls_first"] `created_at_desc_nulls_first
    | [@bs.as "data_asc"] `data_asc
    | [@bs.as "data_asc_nulls_first"] `data_asc_nulls_first
    | [@bs.as "data_desc"] `data_desc
    | [@bs.as "data_desc_nulls_first"] `data_desc_nulls_first
    | [@bs.as "note_id_asc"] `note_id_asc
    | [@bs.as "note_id_asc_nulls_first"] `note_id_asc_nulls_first
    | [@bs.as "note_id_desc"] `note_id_desc
    | [@bs.as "note_id_desc_nulls_first"] `note_id_desc_nulls_first
    | [@bs.as "title_asc"] `title_asc
    | [@bs.as "title_asc_nulls_first"] `title_asc_nulls_first
    | [@bs.as "title_desc"] `title_desc
    | [@bs.as "title_desc_nulls_first"] `title_desc_nulls_first
  ];
  [@bs.deriving {jsConverter: newType}]
  type user_identity_constraint = [
    | [@bs.as "user_identity_pkey"] `user_identity_pkey
  ];
  [@bs.deriving {jsConverter: newType}]
  type user_constraint = [ | [@bs.as "user_pkey"] `user_pkey];
  [@bs.deriving {jsConverter: newType}]
  type user_identity_type_order_by = [
    | [@bs.as "user_identity_type_asc"] `user_identity_type_asc
    | [@bs.as "user_identity_type_asc_nulls_first"]
      `user_identity_type_asc_nulls_first
    | [@bs.as "user_identity_type_desc"] `user_identity_type_desc
    | [@bs.as "user_identity_type_desc_nulls_first"]
      `user_identity_type_desc_nulls_first
  ];
  [@bs.deriving {jsConverter: newType}]
  type note_constraint = [ | [@bs.as "note_pkey"] `note_pkey];
  [@bs.deriving {jsConverter: newType}]
  type note_revision_constraint = [
    | [@bs.as "note_revision_pkey"] `note_revision_pkey
  ];
  [@bs.deriving {jsConverter: newType}]
  type user_identity_order_by = [
    | [@bs.as "data_asc"] `data_asc
    | [@bs.as "data_asc_nulls_first"] `data_asc_nulls_first
    | [@bs.as "data_desc"] `data_desc
    | [@bs.as "data_desc_nulls_first"] `data_desc_nulls_first
    | [@bs.as "identity_id_asc"] `identity_id_asc
    | [@bs.as "identity_id_asc_nulls_first"] `identity_id_asc_nulls_first
    | [@bs.as "identity_id_desc"] `identity_id_desc
    | [@bs.as "identity_id_desc_nulls_first"] `identity_id_desc_nulls_first
    | [@bs.as "identity_type_asc"] `identity_type_asc
    | [@bs.as "identity_type_asc_nulls_first"] `identity_type_asc_nulls_first
    | [@bs.as "identity_type_desc"] `identity_type_desc
    | [@bs.as "identity_type_desc_nulls_first"] `identity_type_desc_nulls_first
    | [@bs.as "user_id_asc"] `user_id_asc
    | [@bs.as "user_id_asc_nulls_first"] `user_id_asc_nulls_first
    | [@bs.as "user_id_desc"] `user_id_desc
    | [@bs.as "user_id_desc_nulls_first"] `user_id_desc_nulls_first
  ];
  [@bs.deriving {jsConverter: newType}]
  type note_order_by = [
    | [@bs.as "created_at_asc"] `created_at_asc
    | [@bs.as "created_at_asc_nulls_first"] `created_at_asc_nulls_first
    | [@bs.as "created_at_desc"] `created_at_desc
    | [@bs.as "created_at_desc_nulls_first"] `created_at_desc_nulls_first
    | [@bs.as "data_asc"] `data_asc
    | [@bs.as "data_asc_nulls_first"] `data_asc_nulls_first
    | [@bs.as "data_desc"] `data_desc
    | [@bs.as "data_desc_nulls_first"] `data_desc_nulls_first
    | [@bs.as "id_asc"] `id_asc
    | [@bs.as "id_asc_nulls_first"] `id_asc_nulls_first
    | [@bs.as "id_desc"] `id_desc
    | [@bs.as "id_desc_nulls_first"] `id_desc_nulls_first
    | [@bs.as "title_asc"] `title_asc
    | [@bs.as "title_asc_nulls_first"] `title_asc_nulls_first
    | [@bs.as "title_desc"] `title_desc
    | [@bs.as "title_desc_nulls_first"] `title_desc_nulls_first
    | [@bs.as "updated_at_asc"] `updated_at_asc
    | [@bs.as "updated_at_asc_nulls_first"] `updated_at_asc_nulls_first
    | [@bs.as "updated_at_desc"] `updated_at_desc
    | [@bs.as "updated_at_desc_nulls_first"] `updated_at_desc_nulls_first
    | [@bs.as "user_id_asc"] `user_id_asc
    | [@bs.as "user_id_asc_nulls_first"] `user_id_asc_nulls_first
    | [@bs.as "user_id_desc"] `user_id_desc
    | [@bs.as "user_id_desc_nulls_first"] `user_id_desc_nulls_first
  ];
  [@bs.deriving {jsConverter: newType}]
  type user_identity_type_constraint = [
    | [@bs.as "user_identity_type_pkey"] `user_identity_type_pkey
  ];
  type note_prepend_input = {. "data": Js.Nullable.t(jsonb)}
  and timestamptz_comparison_exp = {
    .
    "_eq": Js.Nullable.t(timestamptz),
    "_gt": Js.Nullable.t(timestamptz),
    "_gte": Js.Nullable.t(timestamptz),
    "_in": Js.Nullable.t(array(Js.Nullable.t(timestamptz))),
    "_is_null": Js.Nullable.t(bool),
    "_lt": Js.Nullable.t(timestamptz),
    "_lte": Js.Nullable.t(timestamptz),
    "_neq": Js.Nullable.t(timestamptz),
    "_nin": Js.Nullable.t(array(Js.Nullable.t(timestamptz))),
  }
  and user_identity_type_set_input = {
    .
    "user_identity_type": Js.Nullable.t(string),
  }
  and user_identity_type_bool_exp = {
    .
    "_and":
      Js.Nullable.t(array(Js.Nullable.t(user_identity_type_bool_exp))),
    "_not": Js.Nullable.t(user_identity_type_bool_exp),
    "_or": Js.Nullable.t(array(Js.Nullable.t(user_identity_type_bool_exp))),
    "user_identity_type": Js.Nullable.t(varchar_comparison_exp),
  }
  and note_revision_delete_key_input = {. "data": Js.Nullable.t(string)}
  and note_revision_delete_at_path_input = {
    .
    "data": Js.Nullable.t(array(Js.Nullable.t(string))),
  }
  and note_delete_key_input = {. "data": Js.Nullable.t(string)}
  and note_revision_on_conflict = {
    .
    "action": abs_conflict_action,
    "constraint": Js.Nullable.t(abs_note_revision_constraint),
  }
  and user_identity_insert_input = {
    .
    "data": Js.Nullable.t(jsonb),
    "identity_id": Js.Nullable.t(string),
    "identity_type": Js.Nullable.t(string),
    "user_id": Js.Nullable.t(string),
  }
  and note_revision_set_input = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "note_id": Js.Nullable.t(string),
    "title": Js.Nullable.t(string),
  }
  and user_identity_on_conflict = {
    .
    "action": abs_conflict_action,
    "constraint": Js.Nullable.t(abs_user_identity_constraint),
  }
  and note_on_conflict = {
    .
    "action": abs_conflict_action,
    "constraint": Js.Nullable.t(abs_note_constraint),
  }
  and jsonb_comparison_exp = {
    .
    "_eq": Js.Nullable.t(jsonb),
    "_gt": Js.Nullable.t(jsonb),
    "_gte": Js.Nullable.t(jsonb),
    "_in": Js.Nullable.t(array(Js.Nullable.t(jsonb))),
    "_is_null": Js.Nullable.t(bool),
    "_lt": Js.Nullable.t(jsonb),
    "_lte": Js.Nullable.t(jsonb),
    "_neq": Js.Nullable.t(jsonb),
    "_nin": Js.Nullable.t(array(Js.Nullable.t(jsonb))),
  }
  and user_identity_delete_at_path_input = {
    .
    "data": Js.Nullable.t(array(Js.Nullable.t(string))),
  }
  and user_set_input = {
    .
    "avatar": Js.Nullable.t(string),
    "created_at": Js.Nullable.t(timestamptz),
    "email": Js.Nullable.t(string),
    "id": Js.Nullable.t(string),
    "name": Js.Nullable.t(string),
    "updated_at": Js.Nullable.t(timestamptz),
    "username": Js.Nullable.t(string),
  }
  and note_revision_prepend_input = {. "data": Js.Nullable.t(jsonb)}
  and note_append_input = {. "data": Js.Nullable.t(jsonb)}
  and user_identity_bool_exp = {
    .
    "_and": Js.Nullable.t(array(Js.Nullable.t(user_identity_bool_exp))),
    "_not": Js.Nullable.t(user_identity_bool_exp),
    "_or": Js.Nullable.t(array(Js.Nullable.t(user_identity_bool_exp))),
    "data": Js.Nullable.t(jsonb_comparison_exp),
    "identity_id": Js.Nullable.t(varchar_comparison_exp),
    "identity_type": Js.Nullable.t(varchar_comparison_exp),
    "user": Js.Nullable.t(user_bool_exp),
    "user_id": Js.Nullable.t(varchar_comparison_exp),
  }
  and user_insert_input = {
    .
    "avatar": Js.Nullable.t(string),
    "created_at": Js.Nullable.t(timestamptz),
    "email": Js.Nullable.t(string),
    "id": Js.Nullable.t(string),
    "name": Js.Nullable.t(string),
    "updated_at": Js.Nullable.t(timestamptz),
    "username": Js.Nullable.t(string),
  }
  and note_insert_input = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "id": Js.Nullable.t(string),
    "title": Js.Nullable.t(string),
    "updated_at": Js.Nullable.t(timestamptz),
    "user_id": Js.Nullable.t(string),
  }
  and user_identity_delete_elem_input = {. "data": Js.Nullable.t(int)}
  and note_set_input = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "id": Js.Nullable.t(string),
    "title": Js.Nullable.t(string),
    "updated_at": Js.Nullable.t(timestamptz),
    "user_id": Js.Nullable.t(string),
  }
  and user_identity_set_input = {
    .
    "data": Js.Nullable.t(jsonb),
    "identity_id": Js.Nullable.t(string),
    "identity_type": Js.Nullable.t(string),
    "user_id": Js.Nullable.t(string),
  }
  and user_identity_delete_key_input = {. "data": Js.Nullable.t(string)}
  and note_revision_delete_elem_input = {. "data": Js.Nullable.t(int)}
  and note_delete_at_path_input = {
    .
    "data": Js.Nullable.t(array(Js.Nullable.t(string))),
  }
  and note_bool_exp = {
    .
    "_and": Js.Nullable.t(array(Js.Nullable.t(note_bool_exp))),
    "_not": Js.Nullable.t(note_bool_exp),
    "_or": Js.Nullable.t(array(Js.Nullable.t(note_bool_exp))),
    "created_at": Js.Nullable.t(timestamptz_comparison_exp),
    "data": Js.Nullable.t(jsonb_comparison_exp),
    "id": Js.Nullable.t(varchar_comparison_exp),
    "notes": Js.Nullable.t(note_revision_bool_exp),
    "title": Js.Nullable.t(text_comparison_exp),
    "updated_at": Js.Nullable.t(timestamptz_comparison_exp),
    "user": Js.Nullable.t(user_bool_exp),
    "user_id": Js.Nullable.t(varchar_comparison_exp),
  }
  and user_identity_prepend_input = {. "data": Js.Nullable.t(jsonb)}
  and user_identity_append_input = {. "data": Js.Nullable.t(jsonb)}
  and note_delete_elem_input = {. "data": Js.Nullable.t(int)}
  and user_identity_type_insert_input = {
    .
    "user_identity_type": Js.Nullable.t(string),
  }
  and note_revision_insert_input = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "note_id": Js.Nullable.t(string),
    "title": Js.Nullable.t(string),
  }
  and note_revision_bool_exp = {
    .
    "_and": Js.Nullable.t(array(Js.Nullable.t(note_revision_bool_exp))),
    "_not": Js.Nullable.t(note_revision_bool_exp),
    "_or": Js.Nullable.t(array(Js.Nullable.t(note_revision_bool_exp))),
    "created_at": Js.Nullable.t(timestamptz_comparison_exp),
    "data": Js.Nullable.t(jsonb_comparison_exp),
    "note": Js.Nullable.t(note_bool_exp),
    "note_id": Js.Nullable.t(varchar_comparison_exp),
    "title": Js.Nullable.t(text_comparison_exp),
  }
  and note_revision_append_input = {. "data": Js.Nullable.t(jsonb)}
  and user_bool_exp = {
    .
    "_and": Js.Nullable.t(array(Js.Nullable.t(user_bool_exp))),
    "_not": Js.Nullable.t(user_bool_exp),
    "_or": Js.Nullable.t(array(Js.Nullable.t(user_bool_exp))),
    "avatar": Js.Nullable.t(varchar_comparison_exp),
    "created_at": Js.Nullable.t(timestamptz_comparison_exp),
    "email": Js.Nullable.t(varchar_comparison_exp),
    "id": Js.Nullable.t(varchar_comparison_exp),
    "identities": Js.Nullable.t(user_identity_bool_exp),
    "name": Js.Nullable.t(varchar_comparison_exp),
    "notes": Js.Nullable.t(note_bool_exp),
    "updated_at": Js.Nullable.t(timestamptz_comparison_exp),
    "username": Js.Nullable.t(text_comparison_exp),
  }
  and user_identity_type_on_conflict = {
    .
    "action": abs_conflict_action,
    "constraint": Js.Nullable.t(abs_user_identity_type_constraint),
  }
  and user_on_conflict = {
    .
    "action": abs_conflict_action,
    "constraint": Js.Nullable.t(abs_user_constraint),
  }
  and text_comparison_exp = {
    .
    "_eq": Js.Nullable.t(string),
    "_gt": Js.Nullable.t(string),
    "_gte": Js.Nullable.t(string),
    "_ilike": Js.Nullable.t(string),
    "_in": Js.Nullable.t(array(Js.Nullable.t(string))),
    "_is_null": Js.Nullable.t(bool),
    "_like": Js.Nullable.t(string),
    "_lt": Js.Nullable.t(string),
    "_lte": Js.Nullable.t(string),
    "_neq": Js.Nullable.t(string),
    "_nilike": Js.Nullable.t(string),
    "_nin": Js.Nullable.t(array(Js.Nullable.t(string))),
    "_nlike": Js.Nullable.t(string),
    "_nsimilar": Js.Nullable.t(string),
    "_similar": Js.Nullable.t(string),
  }
  and varchar_comparison_exp = {
    .
    "_eq": Js.Nullable.t(string),
    "_gt": Js.Nullable.t(string),
    "_gte": Js.Nullable.t(string),
    "_ilike": Js.Nullable.t(string),
    "_in": Js.Nullable.t(array(Js.Nullable.t(string))),
    "_is_null": Js.Nullable.t(bool),
    "_like": Js.Nullable.t(string),
    "_lt": Js.Nullable.t(string),
    "_lte": Js.Nullable.t(string),
    "_neq": Js.Nullable.t(string),
    "_nilike": Js.Nullable.t(string),
    "_nin": Js.Nullable.t(array(Js.Nullable.t(string))),
    "_nlike": Js.Nullable.t(string),
    "_nsimilar": Js.Nullable.t(string),
    "_similar": Js.Nullable.t(string),
  };
  type user_identity_type_mutation_response = {
    .
    "affected_rows": int,
    "returning": array(user_identity_type_no_rels),
  }
  and note_no_rels = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "id": Js.Nullable.t(string),
    "title": Js.Nullable.t(string),
    "updated_at": Js.Nullable.t(timestamptz),
    "user_id": Js.Nullable.t(string),
  }
  and user_identity_mutation_response = {
    .
    "affected_rows": int,
    "returning": array(user_identity_no_rels),
  }
  and mutation_root = {
    .
    "delete_note": Js.Nullable.t(note_mutation_response),
    "delete_note_revision": Js.Nullable.t(note_revision_mutation_response),
    "delete_user": Js.Nullable.t(user_mutation_response),
    "delete_user_identity": Js.Nullable.t(user_identity_mutation_response),
    "delete_user_identity_type":
      Js.Nullable.t(user_identity_type_mutation_response),
    "insert_note": Js.Nullable.t(note_mutation_response),
    "insert_note_revision": Js.Nullable.t(note_revision_mutation_response),
    "insert_user": Js.Nullable.t(user_mutation_response),
    "insert_user_identity": Js.Nullable.t(user_identity_mutation_response),
    "insert_user_identity_type":
      Js.Nullable.t(user_identity_type_mutation_response),
    "update_note": Js.Nullable.t(note_mutation_response),
    "update_note_revision": Js.Nullable.t(note_revision_mutation_response),
    "update_user": Js.Nullable.t(user_mutation_response),
    "update_user_identity": Js.Nullable.t(user_identity_mutation_response),
    "update_user_identity_type":
      Js.Nullable.t(user_identity_type_mutation_response),
  }
  and note_mutation_response = {
    .
    "affected_rows": int,
    "returning": array(note_no_rels),
  }
  and note_revision_mutation_response = {
    .
    "affected_rows": int,
    "returning": array(note_revision_no_rels),
  }
  and user_mutation_response = {
    .
    "affected_rows": int,
    "returning": array(user_no_rels),
  }
  and user_no_rels = {
    .
    "avatar": Js.Nullable.t(string),
    "created_at": Js.Nullable.t(timestamptz),
    "email": Js.Nullable.t(string),
    "id": Js.Nullable.t(string),
    "name": Js.Nullable.t(string),
    "updated_at": Js.Nullable.t(timestamptz),
    "username": Js.Nullable.t(string),
  }
  and user_identity = {
    .
    "data": Js.Nullable.t(jsonb),
    "identity_id": Js.Nullable.t(string),
    "identity_type": Js.Nullable.t(string),
    "user": Js.Nullable.t(user),
    "user_id": Js.Nullable.t(string),
  }
  and user_identity_type = {. "user_identity_type": Js.Nullable.t(string)}
  and query_root = {
    .
    "note": array(note),
    "note_revision": array(note_revision),
    "user": array(user),
    "user_identity": array(user_identity),
    "user_identity_type": array(user_identity_type),
  }
  and user_identity_type_no_rels = {
    .
    "user_identity_type": Js.Nullable.t(string),
  }
  and note_revision_no_rels = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "note_id": Js.Nullable.t(string),
    "title": Js.Nullable.t(string),
  }
  and note = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "id": Js.Nullable.t(string),
    "notes": array(note_revision),
    "title": Js.Nullable.t(string),
    "updated_at": Js.Nullable.t(timestamptz),
    "user": Js.Nullable.t(user),
    "user_id": Js.Nullable.t(string),
  }
  and user_identity_no_rels = {
    .
    "data": Js.Nullable.t(jsonb),
    "identity_id": Js.Nullable.t(string),
    "identity_type": Js.Nullable.t(string),
    "user_id": Js.Nullable.t(string),
  }
  and subscription_root = {
    .
    "note": array(note),
    "note_revision": array(note_revision),
    "user": array(user),
    "user_identity": array(user_identity),
    "user_identity_type": array(user_identity_type),
  }
  and user = {
    .
    "avatar": Js.Nullable.t(string),
    "created_at": Js.Nullable.t(timestamptz),
    "email": Js.Nullable.t(string),
    "id": Js.Nullable.t(string),
    "identities": array(user_identity),
    "name": Js.Nullable.t(string),
    "notes": array(note),
    "updated_at": Js.Nullable.t(timestamptz),
    "username": Js.Nullable.t(string),
  }
  and note_revision = {
    .
    "created_at": Js.Nullable.t(timestamptz),
    "data": Js.Nullable.t(jsonb),
    "note": Js.Nullable.t(note),
    "note_id": Js.Nullable.t(string),
    "title": Js.Nullable.t(string),
  };
  module Query = {};
  module Mutation = {};
  module Subscription = {};
  module Directives = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional] [@bs.as "include"]
      include_: directiveResolver({. "if": bool}),
      [@bs.optional]
      skip: directiveResolver({. "if": bool}),
      [@bs.optional]
      deprecated: directiveResolver({. "reason": Js.Nullable.t(string)}),
    };
  };
  module Note_revision = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      created_at:
        Config.resolver(
          note_revision,
          unit,
          timestamptz,
          Js.Nullable.t(timestamptz),
        ),
      [@bs.optional]
      data:
        Config.resolver(note_revision, unit, jsonb, Js.Nullable.t(jsonb)),
      [@bs.optional]
      note: Config.resolver(note_revision, unit, note, Js.Nullable.t(note)),
      [@bs.optional]
      note_id:
        Config.resolver(note_revision, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      title:
        Config.resolver(note_revision, unit, string, Js.Nullable.t(string)),
    };
  };
  module User = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      avatar: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      created_at:
        Config.resolver(user, unit, timestamptz, Js.Nullable.t(timestamptz)),
      [@bs.optional]
      email: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      identities:
        Config.resolver(
          user,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_user_identity_order_by)),
            "where": Js.Nullable.t(user_identity_bool_exp),
          },
          user_identity,
          array(user_identity),
        ),
      [@bs.optional]
      name: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      notes:
        Config.resolver(
          user,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_note_order_by)),
            "where": Js.Nullable.t(note_bool_exp),
          },
          note,
          array(note),
        ),
      [@bs.optional]
      updated_at:
        Config.resolver(user, unit, timestamptz, Js.Nullable.t(timestamptz)),
      [@bs.optional]
      username: Config.resolver(user, unit, string, Js.Nullable.t(string)),
    };
  };
  module Subscription_root = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      note:
        Config.resolver(
          subscription_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_note_order_by)),
            "where": Js.Nullable.t(note_bool_exp),
          },
          note,
          array(note),
        ),
      [@bs.optional]
      note_revision:
        Config.resolver(
          subscription_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_note_revision_order_by)),
            "where": Js.Nullable.t(note_revision_bool_exp),
          },
          note_revision,
          array(note_revision),
        ),
      [@bs.optional]
      user:
        Config.resolver(
          subscription_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_user_order_by)),
            "where": Js.Nullable.t(user_bool_exp),
          },
          user,
          array(user),
        ),
      [@bs.optional]
      user_identity:
        Config.resolver(
          subscription_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_user_identity_order_by)),
            "where": Js.Nullable.t(user_identity_bool_exp),
          },
          user_identity,
          array(user_identity),
        ),
      [@bs.optional]
      user_identity_type:
        Config.resolver(
          subscription_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by":
              Js.Nullable.t(array(abs_user_identity_type_order_by)),
            "where": Js.Nullable.t(user_identity_type_bool_exp),
          },
          user_identity_type,
          array(user_identity_type),
        ),
    };
  };
  module User_identity_no_rels = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      data:
        Config.resolver(
          user_identity_no_rels,
          unit,
          jsonb,
          Js.Nullable.t(jsonb),
        ),
      [@bs.optional]
      identity_id:
        Config.resolver(
          user_identity_no_rels,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      identity_type:
        Config.resolver(
          user_identity_no_rels,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      user_id:
        Config.resolver(
          user_identity_no_rels,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module Note = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      created_at:
        Config.resolver(note, unit, timestamptz, Js.Nullable.t(timestamptz)),
      [@bs.optional]
      data: Config.resolver(note, unit, jsonb, Js.Nullable.t(jsonb)),
      [@bs.optional]
      id: Config.resolver(note, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      notes:
        Config.resolver(
          note,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_note_revision_order_by)),
            "where": Js.Nullable.t(note_revision_bool_exp),
          },
          note_revision,
          array(note_revision),
        ),
      [@bs.optional]
      title: Config.resolver(note, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      updated_at:
        Config.resolver(note, unit, timestamptz, Js.Nullable.t(timestamptz)),
      [@bs.optional]
      user: Config.resolver(note, unit, user, Js.Nullable.t(user)),
      [@bs.optional]
      user_id: Config.resolver(note, unit, string, Js.Nullable.t(string)),
    };
  };
  module Note_revision_no_rels = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      created_at:
        Config.resolver(
          note_revision_no_rels,
          unit,
          timestamptz,
          Js.Nullable.t(timestamptz),
        ),
      [@bs.optional]
      data:
        Config.resolver(
          note_revision_no_rels,
          unit,
          jsonb,
          Js.Nullable.t(jsonb),
        ),
      [@bs.optional]
      note_id:
        Config.resolver(
          note_revision_no_rels,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      title:
        Config.resolver(
          note_revision_no_rels,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module User_identity_type_no_rels = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      user_identity_type:
        Config.resolver(
          user_identity_type_no_rels,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module Query_root = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      note:
        Config.resolver(
          query_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_note_order_by)),
            "where": Js.Nullable.t(note_bool_exp),
          },
          note,
          array(note),
        ),
      [@bs.optional]
      note_revision:
        Config.resolver(
          query_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_note_revision_order_by)),
            "where": Js.Nullable.t(note_revision_bool_exp),
          },
          note_revision,
          array(note_revision),
        ),
      [@bs.optional]
      user:
        Config.resolver(
          query_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_user_order_by)),
            "where": Js.Nullable.t(user_bool_exp),
          },
          user,
          array(user),
        ),
      [@bs.optional]
      user_identity:
        Config.resolver(
          query_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by": Js.Nullable.t(array(abs_user_identity_order_by)),
            "where": Js.Nullable.t(user_identity_bool_exp),
          },
          user_identity,
          array(user_identity),
        ),
      [@bs.optional]
      user_identity_type:
        Config.resolver(
          query_root,
          {
            .
            "limit": Js.Nullable.t(int),
            "offset": Js.Nullable.t(int),
            "order_by":
              Js.Nullable.t(array(abs_user_identity_type_order_by)),
            "where": Js.Nullable.t(user_identity_type_bool_exp),
          },
          user_identity_type,
          array(user_identity_type),
        ),
    };
  };
  module User_identity_type = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      user_identity_type:
        Config.resolver(
          user_identity_type,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module User_identity = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      data:
        Config.resolver(user_identity, unit, jsonb, Js.Nullable.t(jsonb)),
      [@bs.optional]
      identity_id:
        Config.resolver(user_identity, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      identity_type:
        Config.resolver(user_identity, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      user: Config.resolver(user_identity, unit, user, Js.Nullable.t(user)),
      [@bs.optional]
      user_id:
        Config.resolver(user_identity, unit, string, Js.Nullable.t(string)),
    };
  };
  module User_no_rels = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      avatar:
        Config.resolver(user_no_rels, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      created_at:
        Config.resolver(
          user_no_rels,
          unit,
          timestamptz,
          Js.Nullable.t(timestamptz),
        ),
      [@bs.optional]
      email:
        Config.resolver(user_no_rels, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(user_no_rels, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      name:
        Config.resolver(user_no_rels, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      updated_at:
        Config.resolver(
          user_no_rels,
          unit,
          timestamptz,
          Js.Nullable.t(timestamptz),
        ),
      [@bs.optional]
      username:
        Config.resolver(user_no_rels, unit, string, Js.Nullable.t(string)),
    };
  };
  module User_mutation_response = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      affected_rows: Config.resolver(user_mutation_response, unit, int, int),
      [@bs.optional]
      returning:
        Config.resolver(
          user_mutation_response,
          unit,
          user_no_rels,
          array(user_no_rels),
        ),
    };
  };
  module Note_revision_mutation_response = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      affected_rows:
        Config.resolver(note_revision_mutation_response, unit, int, int),
      [@bs.optional]
      returning:
        Config.resolver(
          note_revision_mutation_response,
          unit,
          note_revision_no_rels,
          array(note_revision_no_rels),
        ),
    };
  };
  module Note_mutation_response = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      affected_rows: Config.resolver(note_mutation_response, unit, int, int),
      [@bs.optional]
      returning:
        Config.resolver(
          note_mutation_response,
          unit,
          note_no_rels,
          array(note_no_rels),
        ),
    };
  };
  module Mutation_root = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      delete_note:
        Config.resolver(
          mutation_root,
          {. "where": note_bool_exp},
          note_mutation_response,
          Js.Nullable.t(note_mutation_response),
        ),
      [@bs.optional]
      delete_note_revision:
        Config.resolver(
          mutation_root,
          {. "where": note_revision_bool_exp},
          note_revision_mutation_response,
          Js.Nullable.t(note_revision_mutation_response),
        ),
      [@bs.optional]
      delete_user:
        Config.resolver(
          mutation_root,
          {. "where": user_bool_exp},
          user_mutation_response,
          Js.Nullable.t(user_mutation_response),
        ),
      [@bs.optional]
      delete_user_identity:
        Config.resolver(
          mutation_root,
          {. "where": user_identity_bool_exp},
          user_identity_mutation_response,
          Js.Nullable.t(user_identity_mutation_response),
        ),
      [@bs.optional]
      delete_user_identity_type:
        Config.resolver(
          mutation_root,
          {. "where": user_identity_type_bool_exp},
          user_identity_type_mutation_response,
          Js.Nullable.t(user_identity_type_mutation_response),
        ),
      [@bs.optional]
      insert_note:
        Config.resolver(
          mutation_root,
          {
            .
            "objects": array(note_insert_input),
            "on_conflict": Js.Nullable.t(note_on_conflict),
          },
          note_mutation_response,
          Js.Nullable.t(note_mutation_response),
        ),
      [@bs.optional]
      insert_note_revision:
        Config.resolver(
          mutation_root,
          {
            .
            "objects": array(note_revision_insert_input),
            "on_conflict": Js.Nullable.t(note_revision_on_conflict),
          },
          note_revision_mutation_response,
          Js.Nullable.t(note_revision_mutation_response),
        ),
      [@bs.optional]
      insert_user:
        Config.resolver(
          mutation_root,
          {
            .
            "objects": array(user_insert_input),
            "on_conflict": Js.Nullable.t(user_on_conflict),
          },
          user_mutation_response,
          Js.Nullable.t(user_mutation_response),
        ),
      [@bs.optional]
      insert_user_identity:
        Config.resolver(
          mutation_root,
          {
            .
            "objects": array(user_identity_insert_input),
            "on_conflict": Js.Nullable.t(user_identity_on_conflict),
          },
          user_identity_mutation_response,
          Js.Nullable.t(user_identity_mutation_response),
        ),
      [@bs.optional]
      insert_user_identity_type:
        Config.resolver(
          mutation_root,
          {
            .
            "objects": array(user_identity_type_insert_input),
            "on_conflict": Js.Nullable.t(user_identity_type_on_conflict),
          },
          user_identity_type_mutation_response,
          Js.Nullable.t(user_identity_type_mutation_response),
        ),
      [@bs.optional]
      update_note:
        Config.resolver(
          mutation_root,
          {
            .
            "_append": Js.Nullable.t(note_append_input),
            "_delete_at_path": Js.Nullable.t(note_delete_at_path_input),
            "_delete_elem": Js.Nullable.t(note_delete_elem_input),
            "_delete_key": Js.Nullable.t(note_delete_key_input),
            "_prepend": Js.Nullable.t(note_prepend_input),
            "_set": Js.Nullable.t(note_set_input),
            "where": note_bool_exp,
          },
          note_mutation_response,
          Js.Nullable.t(note_mutation_response),
        ),
      [@bs.optional]
      update_note_revision:
        Config.resolver(
          mutation_root,
          {
            .
            "_append": Js.Nullable.t(note_revision_append_input),
            "_delete_at_path":
              Js.Nullable.t(note_revision_delete_at_path_input),
            "_delete_elem": Js.Nullable.t(note_revision_delete_elem_input),
            "_delete_key": Js.Nullable.t(note_revision_delete_key_input),
            "_prepend": Js.Nullable.t(note_revision_prepend_input),
            "_set": Js.Nullable.t(note_revision_set_input),
            "where": note_revision_bool_exp,
          },
          note_revision_mutation_response,
          Js.Nullable.t(note_revision_mutation_response),
        ),
      [@bs.optional]
      update_user:
        Config.resolver(
          mutation_root,
          {
            .
            "_set": Js.Nullable.t(user_set_input),
            "where": user_bool_exp,
          },
          user_mutation_response,
          Js.Nullable.t(user_mutation_response),
        ),
      [@bs.optional]
      update_user_identity:
        Config.resolver(
          mutation_root,
          {
            .
            "_append": Js.Nullable.t(user_identity_append_input),
            "_delete_at_path":
              Js.Nullable.t(user_identity_delete_at_path_input),
            "_delete_elem": Js.Nullable.t(user_identity_delete_elem_input),
            "_delete_key": Js.Nullable.t(user_identity_delete_key_input),
            "_prepend": Js.Nullable.t(user_identity_prepend_input),
            "_set": Js.Nullable.t(user_identity_set_input),
            "where": user_identity_bool_exp,
          },
          user_identity_mutation_response,
          Js.Nullable.t(user_identity_mutation_response),
        ),
      [@bs.optional]
      update_user_identity_type:
        Config.resolver(
          mutation_root,
          {
            .
            "_set": Js.Nullable.t(user_identity_type_set_input),
            "where": user_identity_type_bool_exp,
          },
          user_identity_type_mutation_response,
          Js.Nullable.t(user_identity_type_mutation_response),
        ),
    };
  };
  module User_identity_mutation_response = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      affected_rows:
        Config.resolver(user_identity_mutation_response, unit, int, int),
      [@bs.optional]
      returning:
        Config.resolver(
          user_identity_mutation_response,
          unit,
          user_identity_no_rels,
          array(user_identity_no_rels),
        ),
    };
  };
  module Note_no_rels = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      created_at:
        Config.resolver(
          note_no_rels,
          unit,
          timestamptz,
          Js.Nullable.t(timestamptz),
        ),
      [@bs.optional]
      data: Config.resolver(note_no_rels, unit, jsonb, Js.Nullable.t(jsonb)),
      [@bs.optional]
      id: Config.resolver(note_no_rels, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      title:
        Config.resolver(note_no_rels, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      updated_at:
        Config.resolver(
          note_no_rels,
          unit,
          timestamptz,
          Js.Nullable.t(timestamptz),
        ),
      [@bs.optional]
      user_id:
        Config.resolver(note_no_rels, unit, string, Js.Nullable.t(string)),
    };
  };
  module User_identity_type_mutation_response = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      affected_rows:
        Config.resolver(user_identity_type_mutation_response, unit, int, int),
      [@bs.optional]
      returning:
        Config.resolver(
          user_identity_type_mutation_response,
          unit,
          user_identity_type_no_rels,
          array(user_identity_type_no_rels),
        ),
    };
  };
  [@bs.deriving abstract]
  type t = {
    [@bs.optional]
    note_revision: Note_revision.t,
    [@bs.optional]
    user: User.t,
    [@bs.optional]
    subscription_root: Subscription_root.t,
    [@bs.optional]
    user_identity_no_rels: User_identity_no_rels.t,
    [@bs.optional]
    note: Note.t,
    [@bs.optional]
    note_revision_no_rels: Note_revision_no_rels.t,
    [@bs.optional]
    user_identity_type_no_rels: User_identity_type_no_rels.t,
    [@bs.optional]
    query_root: Query_root.t,
    [@bs.optional]
    user_identity_type: User_identity_type.t,
    [@bs.optional]
    user_identity: User_identity.t,
    [@bs.optional]
    user_no_rels: User_no_rels.t,
    [@bs.optional]
    user_mutation_response: User_mutation_response.t,
    [@bs.optional]
    note_revision_mutation_response: Note_revision_mutation_response.t,
    [@bs.optional]
    note_mutation_response: Note_mutation_response.t,
    [@bs.optional]
    mutation_root: Mutation_root.t,
    [@bs.optional]
    user_identity_mutation_response: User_identity_mutation_response.t,
    [@bs.optional]
    note_no_rels: Note_no_rels.t,
    [@bs.optional]
    user_identity_type_mutation_response: User_identity_type_mutation_response.t,
  };
};
