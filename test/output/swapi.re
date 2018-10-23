module type SchemaConfig = {
  module Scalars: {type id;};
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type resolver('payload, 'fieldType, 'result) =
    Config.resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  [@bs.deriving {jsConverter: newType}]
  type episode = [
    | [@bs.as "NEWHOPE"] `NEWHOPE
    | [@bs.as "EMPIRE"] `EMPIRE
    | [@bs.as "JEDI"] `JEDI
  ];
  [@bs.deriving {jsConverter: newType}]
  type lengthUnit = [ | [@bs.as "METER"] `METER | [@bs.as "FOOT"] `FOOT];
  type colorInput = {
    .
    "red": int,
    "green": int,
    "blue": int,
  }
  and reviewInput = {
    .
    "stars": int,
    "commentary": Js.Nullable.t(string),
    "favorite_color": Js.Nullable.t(colorInput),
  };
  type searchResult
  and character = {
    .
    "__typename": string,
    "id": string,
    "name": string,
    "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
    "friendsConnection": friendsConnection,
    "appearsIn": array(Js.Nullable.t(episode)),
  }
  and subscription = {
    .
    "__typename": string,
    "reviewAdded": Js.Nullable.t(review),
  }
  and droid = {
    .
    "__typename": string,
    "id": string,
    "name": string,
    "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
    "friendsConnection": friendsConnection,
    "appearsIn": array(Js.Nullable.t(episode)),
    "primaryFunction": Js.Nullable.t(string),
  }
  and friendsConnection = {
    .
    "__typename": string,
    "totalCount": Js.Nullable.t(int),
    "edges": Js.Nullable.t(array(Js.Nullable.t(friendsEdge))),
    "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
    "pageInfo": pageInfo,
  }
  and query = {
    .
    "__typename": string,
    "hero": Js.Nullable.t(character),
    "reviews": Js.Nullable.t(array(Js.Nullable.t(review))),
    "search": Js.Nullable.t(array(Js.Nullable.t(searchResult))),
    "character": Js.Nullable.t(character),
    "droid": Js.Nullable.t(droid),
    "human": Js.Nullable.t(human),
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
    "id": string,
    "name": string,
    "homePlanet": Js.Nullable.t(string),
    "height": Js.Nullable.t(float),
    "mass": Js.Nullable.t(float),
    "friends": Js.Nullable.t(array(Js.Nullable.t(character))),
    "friendsConnection": friendsConnection,
    "appearsIn": array(Js.Nullable.t(episode)),
    "starships": Js.Nullable.t(array(Js.Nullable.t(starship))),
  }
  and pageInfo = {
    .
    "__typename": string,
    "startCursor": Js.Nullable.t(string),
    "endCursor": Js.Nullable.t(string),
    "hasNextPage": bool,
  }
  and starship = {
    .
    "__typename": string,
    "id": string,
    "name": string,
    "length": Js.Nullable.t(float),
    "coordinates": Js.Nullable.t(array(array(float))),
  }
  and review = {
    .
    "__typename": string,
    "episode": Js.Nullable.t(episode),
    "stars": int,
    "commentary": Js.Nullable.t(string),
  };
  external humanToSearchResult: human => searchResult = "%identity";
  external droidToSearchResult: droid => searchResult = "%identity";
  external starshipToSearchResult: starship => searchResult = "%identity";
  module Queries = {
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
          Js.Nullable.t(array(Js.Nullable.t(review))),
        ),
      [@bs.optional]
      search:
        resolver(
          {. "text": Js.Nullable.t(string)},
          searchResult,
          Js.Nullable.t(array(Js.Nullable.t(searchResult))),
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
  module Mutations = {
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
  module Subscriptions = {
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
};
