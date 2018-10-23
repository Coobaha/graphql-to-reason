module type SchemaConfig = {
  module Scalars: {type id;};
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type id = Config.Scalars.id;
    type resolver('payload, 'fieldType, 'result) =
      Config.resolver('payload, 'fieldType, 'result);
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
      "__typename": string,
      "appearsIn": array(Js.Nullable.t(episode)),
      "friends": array(Js.Nullable.t(character)),
      "friendsConnection": friendsConnection,
      "id": string,
      "name": string,
    }
    and subscription = {
      .
      "__typename": string,
      "reviewAdded": Js.Nullable.t(review),
    }
    and droid = {
      .
      "__typename": string,
      "appearsIn": array(Js.Nullable.t(episode)),
      "friends": array(Js.Nullable.t(character)),
      "friendsConnection": friendsConnection,
      "id": string,
      "name": string,
      "primaryFunction": Js.Nullable.t(string),
    }
    and friendsConnection = {
      .
      "__typename": string,
      "edges": array(Js.Nullable.t(friendsEdge)),
      "friends": array(Js.Nullable.t(character)),
      "pageInfo": pageInfo,
      "totalCount": Js.Nullable.t(int),
    }
    and query = {
      .
      "__typename": string,
      "character": Js.Nullable.t(character),
      "droid": Js.Nullable.t(droid),
      "hero": Js.Nullable.t(character),
      "human": Js.Nullable.t(human),
      "reviews": array(Js.Nullable.t(review)),
      "search": array(Js.Nullable.t(searchResult)),
      "starship": Js.Nullable.t(starship),
    }
    and friendsEdge = {
      .
      "__typename": string,
      "cursor": string,
      "node": Js.Nullable.t(character),
    }
    and mutation = {
      .
      "__typename": string,
      "createReview": Js.Nullable.t(review),
    }
    and human = {
      .
      "__typename": string,
      "appearsIn": array(Js.Nullable.t(episode)),
      "friends": array(Js.Nullable.t(character)),
      "friendsConnection": friendsConnection,
      "height": Js.Nullable.t(float),
      "homePlanet": Js.Nullable.t(string),
      "id": string,
      "mass": Js.Nullable.t(float),
      "name": string,
      "starships": array(Js.Nullable.t(starship)),
    }
    and pageInfo = {
      .
      "__typename": string,
      "endCursor": Js.Nullable.t(string),
      "hasNextPage": bool,
      "startCursor": Js.Nullable.t(string),
    }
    and starship = {
      .
      "__typename": string,
      "coordinates": array(array(float)),
      "id": string,
      "length": Js.Nullable.t(float),
      "name": string,
    }
    and review = {
      .
      "__typename": string,
      "commentary": Js.Nullable.t(string),
      "episode": Js.Nullable.t(episode),
      "stars": int,
    };
    external humanToSearchResult : human => searchResult = "%identity";
    external droidToSearchResult : droid => searchResult = "%identity";
    external starshipToSearchResult : starship => searchResult = "%identity";
    module Queries: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        __typename: resolver(unit, string, string),
        [@bs.optional]
        hero:
          resolver(
            {. "episode": Js.Nullable.t(abs_episode)},
            character,
            Js.Nullable.t(character),
          ),
        [@bs.optional]
        reviews:
          resolver(
            {. "episode": abs_episode},
            review,
            array(Js.Nullable.t(review)),
          ),
        [@bs.optional]
        search:
          resolver(
            {. "text": Js.Nullable.t(string)},
            searchResult,
            array(Js.Nullable.t(searchResult)),
          ),
        [@bs.optional]
        character:
          resolver({. "id": string}, character, Js.Nullable.t(character)),
        [@bs.optional]
        droid: resolver({. "id": string}, droid, Js.Nullable.t(droid)),
        [@bs.optional]
        human: resolver({. "id": string}, human, Js.Nullable.t(human)),
        [@bs.optional]
        starship:
          resolver({. "id": string}, starship, Js.Nullable.t(starship)),
      };
    };
    module Mutations: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        __typename: resolver(unit, string, string),
        [@bs.optional]
        createReview:
          resolver(
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
    module Subscriptions: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        __typename: resolver(unit, string, string),
        [@bs.optional]
        reviewAdded:
          resolver(
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
