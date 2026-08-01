# Experiment 10: Design of a Pushdown Automaton (PDA) for the Language L = {anbn | n = 0}

## Aim

To design a Pushdown Automaton (PDA) that accepts the language:

\[
L=\{a^n b^n \mid n\ge0\}
\]

where the number of **a's** is equal to the number of **b's**.

---

## Problem Statement

Design a Pushdown Automaton (PDA) that accepts the language:

\[
L=\{a^n b^n \mid n\ge0\}
\]

where **n** represents the number of **a's** and **b's** in the input string.

---

## Theory

A **Pushdown Automaton (PDA)** is an extension of a Finite Automaton that uses a **stack** to store information.

Unlike DFA and NFA, a PDA can recognize **Context-Free Languages (CFLs)** because it can count symbols using its stack.

For the language

\[
L=\{a^n b^n \mid n\ge0\}
\]

the PDA works as follows:

- Push one symbol onto the stack for every **a** read.
- When **b** is encountered, pop one symbol from the stack for every **b**.
- If the stack becomes empty exactly after all input symbols are processed, the string is accepted.

---

## Algorithm

1. Start in the initial state.
2. Push the stack bottom marker (`Z`).
3. Read each `a` and push `A` onto the stack.
4. When the first `b` is encountered, move to the next state.
5. Pop one `A` for every `b`.
6. If all input symbols are read and only the stack bottom marker remains, accept the string.
7. Otherwise, reject the string.

---

## PDA Components

### States

- q0 – Initial state
- q1 – Push state
- q2 – Pop state
- q3 – Accept state

### Input Alphabet

```
S = {a, b}
```

### Stack Alphabet

```
G = {A, Z}
```

where

- Z = Stack bottom marker
- A = Symbol pushed for every 'a'

---

## Transition Function

| Current State | Input | Stack Top | Next State | Stack Operation |
|---------------|-------|-----------|------------|-----------------|
| q0 | e | e | q1 | Push Z |
| q1 | a | Z | q1 | Push A |
| q1 | a | A | q1 | Push A |
| q1 | b | A | q2 | Pop A |
| q2 | b | A | q2 | Pop A |
| q2 | e | Z | q3 | Accept |

---

## Source Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    int countA = 0, countB = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    i = 0;

    while(i < len && str[i] == 'a')
    {
        countA++;
        i++;
    }

    while(i < len && str[i] == 'b')
    {
        countB++;
        i++;
    }

    if(i == len && countA == countB)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
```

---

## Sample Input 1

```
aaabbb
```

### Output

```
String Accepted
```

---

## Sample Input 2

```
aabb
```

### Output

```
String Accepted
```

---

## Sample Input 3

```
aaabb
```

### Output

```
String Rejected
```

---

## Explanation

The program counts the number of **a's** followed by **b's**.

If:

- all `a`s appear before `b`s, and
- the number of `a`s equals the number of `b`s,

then the string belongs to the language **L = {anbn | n = 0}** and is accepted.

Otherwise, it is rejected.

---

## Time Complexity

\[
O(n)
\]

where **n** is the length of the input string.

---

## Space Complexity

\[
O(1)
\]

---

## Applications

- Compiler syntax analysis
- Parsing Context-Free Languages
- Expression evaluation
- Programming language design
- XML and HTML parsing
- Automata Theory

---

## Conclusion

The Pushdown Automaton successfully recognizes the language

\[
L=\{a^n b^n \mid n\ge0\}
\]

by using a stack to match each **a** with a corresponding **b**. This demonstrates the power of PDAs in recognizing Context-Free Languages that cannot be recognized by finite automata.