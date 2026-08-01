# Experiment 9: Design and Simulation of a DFA to Accept the Strings "a", "ac", and "bac"

## Aim

To design and simulate a Deterministic Finite Automaton (DFA) that accepts only the input strings **"a"**, **"ac"**, and **"bac"** over the alphabet **S = {a, b, c}**.

---

## Problem Statement

Design a Deterministic Finite Automaton (DFA) using a simulator to accept only the input strings:

- a
- ac
- bac

Any other string over the alphabet **{a, b, c}** should be rejected.

---

## Theory

A **Deterministic Finite Automaton (DFA)** is a finite state machine in which every state has exactly one transition for each input symbol.

For this experiment, the DFA is designed to recognize exactly three valid strings:

- **a**
- **ac**
- **bac**

Each valid string follows a unique sequence of transitions from the initial state to an accepting state. Any incorrect symbol or extra character leads to a dead state, ensuring that only the specified strings are accepted.

---

## States

- q0 – Initial State
- q1 – After reading **a**
- q2 – After reading **b**
- q3 – After reading **ba**
- q4 – Accepting state for **ac**
- q5 – Accepting state for **bac**
- qd – Dead State

---

## Alphabet

```
S = {a, b, c}
```

---

## Transition Table

| Present State | a | b | c |
|---------------|---|---|---|
| ? q0 | q1 | q2 | qd |
| * q1 | qd | qd | q4 |
| q2 | q3 | qd | qd |
| q3 | qd | qd | q5 |
| * q4 | qd | qd | qd |
| * q5 | qd | qd | qd |
| qd | qd | qd | qd |

---

## Algorithm

1. Start the program.
2. Read the input string.
3. Compare the string with the accepted strings:
   - "a"
   - "ac"
   - "bac"
4. If the input matches any one of them, display **"String Accepted"**.
5. Otherwise, display **"String Rejected"**.
6. Stop the program.

---

## Source Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter the string: ");
    scanf("%s", str);

    if(strcmp(str,"a")==0 ||
       strcmp(str,"ac")==0 ||
       strcmp(str,"bac")==0)
    {
        printf("String Accepted\n");
    }
    else
    {
        printf("String Rejected\n");
    }

    return 0;
}
```

---

## Sample Input 1

```
a
```

### Sample Output

```
String Accepted
```

---

## Sample Input 2

```
ac
```

### Sample Output

```
String Accepted
```

---

## Sample Input 3

```
bac
```

### Sample Output

```
String Accepted
```

---

## Sample Input 4

```
abc
```

### Sample Output

```
String Rejected
```

---

## Explanation

The program compares the input string with the three valid strings:

- **a**
- **ac**
- **bac**

If the input exactly matches one of these strings, it is accepted; otherwise, it is rejected.

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
- Token recognition
- Pattern matching
- Input validation
- Protocol verification
- Automata theory and formal language processing

---

## Conclusion

The C program successfully simulates a **Deterministic Finite Automaton (DFA)** that accepts only the strings **"a"**, **"ac"**, and **"bac"**. It correctly rejects all other strings, demonstrating the implementation of a DFA for recognizing a finite language.