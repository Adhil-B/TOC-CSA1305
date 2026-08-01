# Experiment 3: Finding ε-Closure of All States in an NFA with ε-Moves

## Aim

To write a C program to find the **ε-closure** of all states in a Non-Deterministic Finite Automaton (NFA) containing **ε-transitions**.

---

## Problem Statement

Write a C program to find the **ε-closure** for all the states in a Non-Deterministic Finite Automaton (NFA) with **ε-moves**.

---

## Theory

An **ε-NFA** is a Non-Deterministic Finite Automaton that allows transitions without consuming any input symbol. These transitions are called **ε-transitions** or **epsilon moves**.

The **ε-closure** of a state is the set of all states that can be reached from that state by following **zero or more ε-transitions**.

The ε-closure always includes the state itself.

### Example

Consider the following ε-transitions:

- q0 → q1
- q1 → q2

Then,

- ε-closure(q0) = {q0, q1, q2}
- ε-closure(q1) = {q1, q2}
- ε-closure(q2) = {q2}

---

## Algorithm

1. Start the program.
2. Read the number of states.
3. Read the ε-transition matrix.
4. For each state:
   - Include the state itself in its ε-closure.
   - Recursively visit all states reachable through ε-transitions.
5. Print the ε-closure of every state.
6. Stop the program.

---

## Source Code

```c
#include <stdio.h>

int n;
int e[10][10];
int visited[10];

void eclosure(int state)
{
    int i;

    if(visited[state])
        return;

    visited[state] = 1;

    printf("q%d ", state);

    for(i=0;i<n;i++)
    {
        if(e[state][i]==1)
            eclosure(i);
    }
}

int main()
{
    int i,j;

    printf("Enter number of states: ");
    scanf("%d",&n);

    printf("Enter epsilon transition matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&e[i][j]);
        }
    }

    printf("\nEpsilon Closures\n\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            visited[j]=0;

        printf("ε-closure(q%d) = { ",i);
        eclosure(i);
        printf("}\n");
    }

    return 0;
}
```

---

## Sample Input

```
Enter number of states:
3

Enter epsilon transition matrix:

0 1 0
0 0 1
0 0 0
```

---

## Sample Output

```
Epsilon Closures

ε-closure(q0) = { q0 q1 q2 }

ε-closure(q1) = { q1 q2 }

ε-closure(q2) = { q2 }
```

---

## Explanation

- The program stores ε-transitions in an adjacency matrix.
- It uses **Depth First Search (DFS)** to traverse all states reachable through ε-transitions.
- Each state's ε-closure includes the state itself and all states reachable using only ε-moves.

---

## Time Complexity

\[
O(n^2)
\]

where **n** is the number of states.

---

## Space Complexity

\[
O(n^2)
\]

for storing the ε-transition matrix.

---

## Applications

- Conversion of ε-NFA to NFA
- Conversion of NFA to DFA
- Lexical analysis in compiler design
- Regular expression processing
- Pattern matching
- Formal language processing

---

## Conclusion

The C program successfully computes the **ε-closure** of every state in an ε-NFA by exploring all reachable states through ε-transitions. The ε-closure is an essential step in converting ε-NFAs into equivalent NFAs or DFAs and is widely used in compiler construction and automata theory.