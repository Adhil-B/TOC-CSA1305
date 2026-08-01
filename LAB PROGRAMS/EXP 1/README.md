# Experiment 1: Simulation of a Deterministic Finite Automaton (DFA)

## Aim

To write a C program that simulates a Deterministic Finite Automaton (DFA) to accept strings over the alphabet **{a, b}** that **start with 'a' and end with 'a'**.

---

## Problem Statement

Write a C program to simulate a Deterministic Finite Automaton (DFA) for the language representing strings that start with **'a'** and end with **'a'**.

---

## Theory

A **Deterministic Finite Automaton (DFA)** is a finite-state machine in which each state has exactly one transition for every input symbol. A DFA accepts or rejects an input string by processing one symbol at a time and ending in either an accepting or a non-accepting state.

For this experiment, the DFA accepts all strings over the alphabet **{a, b}** that begin with **'a'** and end with **'a'**.

### Examples

**Accepted Strings**

- a
- aa
- aba
- abba
- aabbaa

**Rejected Strings**

- b
- ba
- abb
- baba
- bb

---

## Algorithm

1. Start the program.
2. Read the input string.
3. Check whether the first character is **'a'**.
4. Check whether the last character is **'a'**.
5. If both conditions are satisfied, display **"String Accepted"**.
6. Otherwise, display **"String Rejected"**.
7. Stop the program.

---

## Source Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    if(str[0] == 'a' && str[len-1] == 'a')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
```

---

## Sample Input 1

```
abba
```

### Sample Output 1

```
String Accepted
```

---

## Sample Input 2

```
abb
```

### Sample Output 2

```
String Rejected
```

---

## Explanation

- The program first reads the input string.
- It checks whether the **first character** is **'a'**.
- It then checks whether the **last character** is **'a'**.
- If both conditions are true, the string belongs to the language and is accepted.
- Otherwise, the string is rejected.

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

- Lexical analysis in compiler design
- Pattern matching
- Input validation
- Digital circuit design
- Protocol verification
- String processing

---

## Conclusion

The C program successfully simulates a Deterministic Finite Automaton (DFA) that accepts strings over the alphabet **{a, b}** starting with **'a'** and ending with **'a'**. The program correctly determines whether the given input string belongs to the specified language.
