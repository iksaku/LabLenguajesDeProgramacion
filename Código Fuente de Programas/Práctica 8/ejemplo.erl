-module(fact).
-export([factorial/1]).


factorial(N) ->
    factorial(1, N, 1).

factorial(Current, N, Result) when Current =< N ->
    NewResult = Result * Current,
    factorial(Current+1, N, NewResult);

factorial(_, _, Result) ->
    Result.