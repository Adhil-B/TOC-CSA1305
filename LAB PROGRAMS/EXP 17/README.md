# Experiment 17: Design and Simulation of a Turing Machine (TM) Using Simulator

## Aim

To design and simulate a Turing Machine (TM) using a simulator to perform subtraction of unary numbers (e.g., `aaa` - `aa`).

---

## Problem Statement

Design a TM to perform unary subtraction.

---

## Theory

To subtract two unary numbers separated by a '-', the TM alternately crosses off one 'a' from the first number and one 'a' from the second number until the second number is exhausted. The remaining 'a's represent the result.

---

## States

- **q0** – Initial State
- **q1** – Cross off left
- **q2** – Cross off right
- **q_accept** – Accepting State

---

## Input Alphabet

```
Σ = {a, -}, Γ = {a, -, B, X}
```

---

## Transition Table

| Present State | Tape Symbol | Next State | Write Symbol | Move |
|---------------|-------------|------------|--------------|------|
| → q0 | a | q1 | B | R |
| q1 | a, - | q1 | a, - | R |
| q1 | X | q1 | X | R |
| q1 | a | q2 | X | L |
| q2 | a, -, X | q2 | a, -, X | L |
| q2 | B | q0 | B | R |

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
| aaa-aa | a |
| aaaa-a | aaa |

---

## Result

The TM successfully performs unary subtraction.

---

## Applications

- Arithmetic operations in automata
- Basic computational modeling

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2017%20-%20Output.png)
