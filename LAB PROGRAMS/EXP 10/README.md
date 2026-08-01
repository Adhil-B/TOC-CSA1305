# Experiment 10: Design and Simulation of a Pushdown Automaton (PDA) Using Simulator

## Aim

To design and simulate a Pushdown Automaton (PDA) using a simulator to accept the language $L = \{w \mid w \in (a+b)^* \text{ and } n_a(w) = n_b(w)\}$.

---

## Problem Statement

Design a PDA that accepts strings over the alphabet $\{a, b\}$ where the number of 'a's equals the number of 'b's.

---

## Theory

A Pushdown Automaton (PDA) uses a stack to keep track of counts. For this language, the PDA pushes 'a' onto the stack when it reads 'a' and the stack is empty or has 'a' on top. It pops 'a' when it reads 'b'. Conversely, it pushes 'b' when it reads 'b' and the stack is empty or has 'b' on top, and pops 'b' when it reads 'a'. If the stack is empty (contains only the initial stack symbol) at the end of the input, the string is accepted.

---

## States

- **q0** – Initial State (Push/Pop)
- **q1** – Accepting State

---

## Input Alphabet

```
Σ = {a, b}
```

---

## Transition Table

| Present State | Input | Stack Top | Next State | Stack Action |
|---------------|-------|-----------|------------|--------------|
| → q0 | a | Z0 | q0 | aZ0 |
| q0 | b | Z0 | q0 | bZ0 |
| q0 | a | a | q0 | aa |
| q0 | b | b | q0 | bb |
| q0 | a | b | q0 | ε |
| q0 | b | a | q0 | ε |
| q0 | ε | Z0 | q1 | Z0 |

---

## Procedure

1. Open the simulation software.
2. Create the required states.
3. Mark the initial state.
4. Mark the accepting state(s).
5. Add the transitions according to the transition table.
6. Save the automaton.
7. Test the automaton using different input strings.
8. Verify whether the strings are accepted or rejected.

---

## Test Cases

| Input String | Expected Result |
|--------------|-----------------|
| ab | Accepted |
| ba | Accepted |
| aabb | Accepted |
| abba | Accepted |
| aab | Rejected |
| b | Rejected |

---

## Result

The PDA successfully accepts strings where the number of 'a's equals the number of 'b's and rejects others.

---

## Applications

- Syntax analysis
- Parsing context-free languages
- Compiler design

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2010%20-%20Output.png)
