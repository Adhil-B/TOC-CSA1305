# Experiment 5: Checking Whether a String Belongs to the Given Grammar

## Aim

To write a C program to check whether a given string belongs to the grammar:

```
S ? 0S0 | 1S1 | 0 | 1 | e
```

---

## Problem Statement

Write a C program to check whether a given binary string belongs to the grammar:

```
S ? 0S0 | 1S1 | 0 | 1 | e
```

---

## Theory

A **Context-Free Grammar (CFG)** is a formal grammar used to generate strings of a language.

The given grammar is:

```
S ? 0S0 | 1S1 | 0 | 1 | e
```

This grammar generates all **binary palindrome strings**, i.e., strings that read the same from left to right and right to left.

The productions work as follows:

- **0S0** adds `0` to both ends of the string.
- **1S1** adds `1` to both ends of the string.
- **0** and **1** generate single-character palindromes.
- **e** generates the empty string.

### Examples

**Accepted Strings**

- e
- 0
- 1
- 00
- 11
- 101
- 010
- 1001
- 0110
- 11011

**Rejected Strings**

- 01
- 10
- 001
- 1010
- 1100

---

## Algorithm

1. Start the program.
2. Read the input binary string.
3. Compare the first and last characters.
4. Continue comparing characters towards the center.
5. If all corresponding characters are equal, the string belongs to the grammar.
6. Otherwise, reject the string.
7. Display the result.
8. Stop the program.

---

## Source Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter the binary string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
```

---

## Sample Input 1

```
1001
```

### Sample Output 1

```
String Accepted
```

---

## Sample Input 2

```
1010
```

### Sample Output 2

```
String Rejected
```

---

## Explanation

The program checks whether the input string is a **palindrome**.

- If the string reads the same from both directions, it satisfies the grammar and is accepted.
- Otherwise, it is rejected.

Since the grammar generates all binary palindrome strings, checking for palindrome is sufficient to determine whether the string belongs to the language.

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

- Compiler design
- Syntax analysis
- Pattern recognition
- DNA sequence analysis
- Data validation
- Automata and Formal Language processing

---

## Conclusion

The C program successfully checks whether a binary string belongs to the grammar:

```
S ? 0S0 | 1S1 | 0 | 1 | e
```

The grammar generates all binary palindrome strings. The program verifies this by comparing characters from both ends of the string and correctly accepts or rejects the input based on whether it is a palindrome.