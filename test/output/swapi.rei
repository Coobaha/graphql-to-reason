module type SchemaConfig = {
  module Scalars: {type id;};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type id = Config.Scalars.id;
    type rootResolver('payload, 'fieldType, 'result) =
      Config.resolver(unit, 'payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type episode = [ | `EMPIRE | `JEDI | `NEWHOPE];
    type abs_episode;
    let episodeToJs: episode => abs_episode;
    let episodeFromJs: abs_episode => episode;
    type lengthUnit = [ | `FOOT | `METER];
    type abs_lengthUnit;
    let lengthUnitToJs: lengthUnit => abs_lengthUnit;
    let lengthUnitFromJs: abs_lengthUnit => lengthUnit;
    type colorInput = {
      .
      "blue": int,
      "green": int,
      "red": int,
    }
    and reviewInput = {
      .
      "commentary": Js.Nullable.t(string),
      "favorite_color": Js.Nullable.t(colorInput),
      "stars": int,
    };
    type searchResult
    and character = {
      .
      "appearsIn": array(Js.Nullable.t(episode)),
      "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
      "friendsConnection": friendsConnection,
      "id": string,
      "name": string,
    }
    and subscription = {. "reviewAdded": Js.Nullable.t(review)}
    and droid = {
      .
      "appearsIn": array(Js.Nullable.t(episode)),
      "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
      "friendsConnection": friendsConnection,
      "id": string,
      "name": string,
      "primaryFunction": Js.Nullable.t(string),
    }
    and friendsConnection = {
      .
      "edges": Js.Nullable.t(array(Js.Nullable.t(friendsEdge))),
      "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
      "pageInfo": pageInfo,
      "totalCount": Js.Nullable.t(int),
    }
    and query = {
      .
      "character": Js.Nullable.t(character),
      "droid": Js.Nullable.t(droid),
      "hero": Js.Nullable.t(character),
      "human": Js.Nullable.t(human),
      "reviews": Js.Nullable.t(array(Js.Nullable.t(review))),
      "search": Js.Nullable.t(array(Js.Nullable.t(searchResult))),
      "starship": Js.Nullable.t(starship),
    }
    and friendsEdge = {
      .
      "cursor": string,
      "node": Js.Nullable.t(character),
    }
    and mutation = {. "createReview": Js.Nullable.t(review)}
    and human = {
      .
      "appearsIn": array(Js.Nullable.t(episode)),
      "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
      "friendsConnection": friendsConnection,
      "height": Js.Nullable.t(float),
      "homePlanet": Js.Nullable.t(string),
      "id": string,
      "mass": Js.Nullable.t(float),
      "name": string,
      "starships": Js.Nullable.t(array(Js.Nullable.t(starship))),
    }
    and pageInfo = {
      .
      "endCursor": Js.Nullable.t(string),
      "hasNextPage": bool,
      "startCursor": Js.Nullable.t(string),
    }
    and starship = {
      .
      "coordinates": Js.Nullable.t(array(array(float))),
      "id": string,
      "length": Js.Nullable.t(float),
      "name": string,
    }
    and review = {
      .
      "commentary": Js.Nullable.t(string),
      "episode": Js.Nullable.t(episode),
      "stars": int,
    };
    external humanToSearchResult : human => searchResult = "%identity";
    external droidToSearchResult : droid => searchResult = "%identity";
    external starshipToSearchResult : starship => searchResult = "%identity";
    module Query: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        hero:
          rootResolver(
            {. "episode": Js.Nullable.t(abs_episode)},
            character,
            Js.Nullable.t(character),
          ),
        [@bs.optional]
        reviews:
          rootResolver(
            {. "episode": abs_episode},
            review,
            Js.Nullable.t(array(Js.Nullable.t(review))),
          ),
        [@bs.optional]
        search:
          rootResolver(
            {. "text": Js.Nullable.t(string)},
            searchResult,
            Js.Nullable.t(array(Js.Nullable.t(searchResult))),
          ),
        [@bs.optional]
        character:
          rootResolver({. "id": string}, character, Js.Nullable.t(character)),
        [@bs.optional]
        droid: rootResolver({. "id": string}, droid, Js.Nullable.t(droid)),
        [@bs.optional]
        human: rootResolver({. "id": string}, human, Js.Nullable.t(human)),
        [@bs.optional]
        starship:
          rootResolver({. "id": string}, starship, Js.Nullable.t(starship)),
      };
    };
    module Mutation: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        createReview:
          rootResolver(
            {
              .
              "episode": Js.Nullable.t(abs_episode),
              "review": reviewInput,
            },
            review,
            Js.Nullable.t(review),
          ),
      };
    };
    module Subscription: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        reviewAdded:
          rootResolver(
            {. "episode": Js.Nullable.t(abs_episode)},
            review,
            Js.Nullable.t(review),
          ),
      };
    };
    module Directives: {
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
  };
