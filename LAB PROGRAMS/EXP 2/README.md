# Experiment 2: Simulation of a Non-Deterministic Finite Automaton (NFA)

## Aim

To write a C program that simulates a Non-Deterministic Finite Automaton (NFA) to accept strings over the alphabet **{0,1}** that **start with '0' and end with '1'**.

---

## Problem Statement

Write a C program to simulate a Non-Deterministic Finite Automaton (NFA) for the language representing strings that start with **'0'** and end with **'1'**.

---

## Theory

A **Non-Deterministic Finite Automaton (NFA)** is a finite-state machine in which a state may have multiple transitions for the same input symbol. An NFA accepts a string if **at least one possible sequence of transitions** ends in an accepting state.

For this experiment, the NFA accepts all binary strings over the alphabet **{0,1}** that begin with **'0'** and end with **'1'**.

### Examples

**Accepted Strings**

- 01
- 001
- 011
- 0101
- 000111

**Rejected Strings**

- 10
- 00
- 111
- 101
- 1100

---

## Algorithm

1. Start the program.
2. Read the input binary string.
3. Check whether the first character is **'0'**.
4. Check whether the last character is **'1'**.
5. If both conditions are satisfied, the string is accepted.
6. Otherwise, the string is rejected.
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

    printf("Enter the binary string: ");
    scanf("%s", str);

    len = strlen(str);

    if(str[0]=='0' && str[len-1]=='1')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
```

---

## Sample Input 1

```
0101
```

### Sample Output 1

```
String Accepted
```

---

## Sample Input 2

```
1100
```

### Sample Output 2

```
String Rejected
```

---

## Explanation

- The program reads a binary string from the user.
- It checks whether the **first character** is **'0'**.
- It then checks whether the **last character** is **'1'**.
- If both conditions are satisfied, the string belongs to the required language and is accepted.
- Otherwise, the string is rejected.

---

## Time Complexity

**O(n)**

where **n** is the length of the input string.

---

## Space Complexity

**O(1)**

---

## Applications

- Pattern matching
- Lexical analysis
- Binary sequence validation
- Network protocol verification
- Digital communication systems
- Automata and compiler design

---

## Conclusion

The C program successfully simulates a **Non-Deterministic Finite Automaton (NFA)** that accepts binary strings beginning with **'0'** and ending with **'1'**. It correctly determines whether the given input string satisfies the specified language.