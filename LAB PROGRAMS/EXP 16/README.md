# Experiment 16: Design and Simulation of a Turing Machine (TM) Using Simulator

## Aim

To design and simulate a Turing Machine (TM) using a simulator to perform addition of unary numbers (e.g., `aa` and `aaa`).

---

## Problem Statement

Design a TM to perform unary addition.

---

## Theory

In unary representation, a number N is represented by N 'a's. To add two unary numbers separated by a '+', the TM replaces the '+' with an 'a', moves to the end of the string, and replaces the last 'a' with a blank (B).

---

## States

- **q0** – Initial State (Find +)
- **q1** – Move to end
- **q2** – Accepting State

---

## Input Alphabet

```
Σ = {a, +}, Γ = {a, +, B}
```

---

## Transition Table

| Present State | Tape Symbol | Next State | Write Symbol | Move |
|---------------|-------------|------------|--------------|------|
| → q0 | a | q0 | a | R |
| q0 | + | q1 | a | R |
| q1 | a | q1 | a | R |
| q1 | B | q2 | B | L |
| q2 | a | q_halt | B | L |

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
| aa+aaa | aaaaa |
| a+a | aa |
| +aa | aa |

---

## Result

The TM successfully performs unary addition.

---

## Applications

- Arithmetic operations in automata
- Basic computational modeling

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2016%20-%20Output.png)
