include SchemaTypes_builder.MakeSchema({
  module Scalars = {};
  type resolver('parent, 'args, 'fieldType, 'result) =
    ('parent, 'args) => Js.Promise.t('result);
  type directiveResolver('payload);
});
