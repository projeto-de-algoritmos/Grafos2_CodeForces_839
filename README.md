# Grafos e Programação Dinâmica
Trabalho de grafos e programação dinâmica para a resolução de uma questão da plataforma Code Forces de dois jeitos diferentes

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 17/0013693  |  João Gabriel Rossi de Borba |
| 17/0013278  |  Ivan Diniz Dobbin |

**Número da Lista**: 6<br>
**Conteúdo da Disciplina**: Grafos e Programação Dinâmica<br>
**Linguagem**: C++<br>


## Sobre 
Nosso projeto se resume a resolver e explicar o funcionamento da questão [839](https://codeforces.com/problemset/problem/839/C) da plataforma codeforces.

## Texto da questão (em inglês)
There are n cities and n - 1 roads in the Seven Kingdoms, each road connects two cities and we can reach any city from any other by the roads.

Theon and Yara Greyjoy are on a horse in the first city, they are starting traveling through the roads. But the weather is foggy, so they can’t see where the horse brings them. When the horse reaches a city (including the first one), it goes to one of the cities connected to the current city. But it is a strange horse, it only goes to cities in which they weren't before. In each such city, the horse goes with equal probabilities and it stops when there are no such cities.

Let the length of each road be 1. The journey starts in the city 1. What is the expected length (expected value of length) of their journey? You can read about expected (average) value by the link https://en.wikipedia.org/wiki/Expected_value.

Input
The first line contains a single integer n (1 ≤ n ≤ 100000) — number of cities.

Then n - 1 lines follow. The i-th line of these lines contains two integers ui and vi (1 ≤ ui, vi ≤ n, ui ≠ vi) — the cities connected by the i-th road.

It is guaranteed that one can reach any city from any other by the roads.

Output
Print a number — the expected length of their journey. The journey starts in the city 1.

Your answer will be considered correct if its absolute or relative error does not exceed 10^ - 6.

## Como rodar

### Para a versão com DFS
```
    g++ dfs_839.cpp
    ./a.out
    input
```

### Para a versão com BFS
```
    g++ bfs_839.cpp
    ./a.out
    input
```
