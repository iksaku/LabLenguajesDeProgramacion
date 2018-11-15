my_factorial(1,F,F):- !.

my_factorial(N, T, F):-
          N2 is N-1,T2 is T * N,
          my_factorial(N2, T2, F).