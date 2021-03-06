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
    module Review: {
        [@bs.deriving abstract]
        type t = {
          [@bs.optional]
          episode:
            Config.resolver(review, unit, episode, Js.Nullable.t(episode)),
          [@bs.optional]
          stars: Config.resolver(review, unit, int, int),
          [@bs.optional]
          commentary:
            Config.resolver(review, unit, string, Js.Nullable.t(string)),
        };
      };
      module Starship: {
        [@bs.deriving abstract]
        type t = {
          [@bs.optional]
          id: Config.resolver(starship, unit, string, string),
          [@bs.optional]
          name: Config.resolver(starship, unit, string, string),
          [@bs.optional]
          length:
            Config.resolver(
              starship,
              {. "unit": Js.Nullable.t(abs_lengthUnit)},
              float,
              Js.Nullable.t(float),
            ),
          [@bs.optional]
          coordinates:
            Config.resolver(
              starship,
              unit,
              float,
              Js.Nullable.t(array(array(float))),
            ),
        };
      };
      module PageInfo: {
        [@bs.deriving abstract]
        type t = {
          [@bs.optional]
          startCursor:
            Config.resolver(pageInfo, unit, string, Js.Nullable.t(string)),
          [@bs.optional]
          endCursor:
            Config.resolver(pageInfo, unit, string, Js.Nullable.t(string)),
          [@bs.optional]
          hasNextPage: Config.resolver(pageInfo, unit, bool, bool),
        };
      };
      module Human: {
        [@bs.deriving abstract]
        type t = {
          [@bs.optional]
          id: Config.resolver(human, unit, string, string),
          [@bs.optional]
          name: Config.resolver(human, unit, string, string),
          [@bs.optional]
          homePlanet:
            Config.resolver(human, unit, string, Js.Nullable.t(string)),
          [@bs.optional]
          height:
            Config.resolver(
              human,
              {. "unit": Js.Nullable.t(abs_lengthUnit)},
              float,
              Js.Nullable.t(float),
            ),
          [@bs.optional]
          mass: Config.resolver(human, unit, float, Js.Nullable.t(float)),
          [@bs.optional]
          friends:
            Config.resolver(
              human,
              unit,
              character,
              Js.Nullable.t(array(Js.Nullable.t(character))),
            ),
          [@bs.optional]
          friendsConnection:
            Config.resolver(
              human,
              {
                .
                "first": Js.Nullable.t(int),
                "after": Js.Nullable.t(string),
              },
              friendsConnection,
              friendsConnection,
            ),
          [@bs.optional]
          appearsIn:
            Config.resolver(
              human,
              unit,
              episode,
              array(Js.Nullable.t(episode)),
            ),
          [@bs.optional]
          starships:
            Config.resolver(
              human,
              unit,
              starship,
              Js.Nullable.t(array(Js.Nullable.t(starship))),
            ),
        };
      };
      module FriendsEdge: {
        [@bs.deriving abstract]
        type t = {
          [@bs.optional]
          cursor: Config.resolver(friendsEdge, unit, string, string),
          [@bs.optional]
          node:
            Config.resolver(
              friendsEdge,
              unit,
              character,
              Js.Nullable.t(character),
            ),
        };
      };
      module FriendsConnection: {
        [@bs.deriving abstract]
        type t = {
          [@bs.optional]
          totalCount:
            Config.resolver(friendsConnection, unit, int, Js.Nullable.t(int)),
          [@bs.optional]
          edges:
            Config.resolver(
              friendsConnection,
              unit,
              friendsEdge,
              Js.Nullable.t(array(Js.Nullable.t(friendsEdge))),
            ),
          [@bs.optional]
          friends:
            Config.resolver(
              friendsConnection,
              unit,
              character,
              Js.Nullable.t(array(Js.Nullable.t(character))),
            ),
          [@bs.optional]
          pageInfo: Config.resolver(friendsConnection, unit, pageInfo, pageInfo),
        };
      };
      module Droid: {
        [@bs.deriving abstract]
        type t = {
          [@bs.optional]
          id: Config.resolver(droid, unit, string, string),
          [@bs.optional]
          name: Config.resolver(droid, unit, string, string),
          [@bs.optional]
          friends:
            Config.resolver(
              droid,
              unit,
              character,
              Js.Nullable.t(array(Js.Nullable.t(character))),
            ),
          [@bs.optional]
          friendsConnection:
            Config.resolver(
              droid,
              {
                .
                "first": Js.Nullable.t(int),
                "after": Js.Nullable.t(string),
              },
              friendsConnection,
              friendsConnection,
            ),
          [@bs.optional]
          appearsIn:
            Config.resolver(
              droid,
              unit,
              episode,
              array(Js.Nullable.t(episode)),
            ),
          [@bs.optional]
          primaryFunction:
            Config.resolver(droid, unit, string, Js.Nullable.t(string)),
        };
      };
      [@bs.deriving abstract]
      type t = {
        [@bs.optional] [@bs.as "Review"]
        review: Review.t,
        [@bs.optional] [@bs.as "Starship"]
        starship: Starship.t,
        [@bs.optional] [@bs.as "PageInfo"]
        pageInfo: PageInfo.t,
        [@bs.optional] [@bs.as "Human"]
        human: Human.t,
        [@bs.optional] [@bs.as "Mutation"]
        mutation: Mutation.t,
        [@bs.optional] [@bs.as "FriendsEdge"]
        friendsEdge: FriendsEdge.t,
        [@bs.optional] [@bs.as "Query"]
        query: Query.t,
        [@bs.optional] [@bs.as "FriendsConnection"]
        friendsConnection: FriendsConnection.t,
        [@bs.optional] [@bs.as "Droid"]
        droid: Droid.t,
        [@bs.optional] [@bs.as "Subscription"]
        subscription: Subscription.t,
      };
  };
