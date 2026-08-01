# Experiment 11: Design and Simulation of a Pushdown Automaton (PDA) Using Simulator

## Aim

To design and simulate a Pushdown Automaton (PDA) using a simulator to accept the input string $a^n b^{2n}$ where $n \ge 1$.

---

## Problem Statement

Design a PDA for the language $L = \{ a^n b^{2n} \mid n \ge 1 \}$.

---

## Theory

A Pushdown Automaton (PDA) is a finite automaton with an extra memory component called a stack. For this language, the PDA pushes two symbols onto the stack for every 'a' read, and pops one symbol for every 'b' read. If the stack is empty at the end of the string, it is accepted.

---

## States

- **q0** – Initial State (Push)
- **q1** – Pop State
- **q2** – Accepting State

---

## Input Alphabet

```
Σ = {a, b}
```

---

## Transition Table

| Present State | Input | Stack Top | Next State | Stack Action |
|---------------|-------|-----------|------------|--------------|
| → q0 | a | Z0 | q0 | XXZ0 |
| q0 | a | X | q0 | XXX |
| q0 | b | X | q1 | ε |
| * q1 | b | X | q1 | ε |
| q1 | ε | Z0 | q2 | Z0 |

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
| abb | Accepted |
| aabbbb | Accepted |
| ab | Rejected |
| aabb | Rejected |

---

## Result

The PDA successfully accepts strings of the form $a^n b^{2n}$ and rejects others.

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

![Output](EXP%2011%20-%20Output.png)
