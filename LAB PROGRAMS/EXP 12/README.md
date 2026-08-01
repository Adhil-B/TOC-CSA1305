# Experiment 12: Design and Simulation of a Turing Machine (TM) Using Simulator

## Aim

To design and simulate a Turing Machine (TM) using a simulator to accept the input string $a^n b^n$ where $n \ge 1$.

---

## Problem Statement

Design a TM for the language $L = \{ a^n b^n \mid n \ge 1 \}$.

---

## Theory

A Turing Machine (TM) consists of an infinite tape and a read/write head. To accept $a^n b^n$, the TM replaces an 'a' with 'X', moves right to find a 'b', replaces it with 'Y', and moves left to repeat the process until all 'a's and 'b's are matched.

---

## States

- **q0** – Initial State (Find a)
- **q1** – Move right to find b
- **q2** – Move left to find X
- **q3** – Check remaining Ys
- **q4** – Accepting State

---

## Input Alphabet

```
Σ = {a, b}, Γ = {a, b, X, Y, B}
```

---

## Transition Table

| Present State | Tape Symbol | Next State | Write Symbol | Move |
|---------------|-------------|------------|--------------|------|
| → q0 | a | q1 | X | R |
| q0 | Y | q3 | Y | R |
| q1 | a | q1 | a | R |
| q1 | Y | q1 | Y | R |
| q1 | b | q2 | Y | L |
| q2 | a | q2 | a | L |
| q2 | Y | q2 | Y | L |
| q2 | X | q0 | X | R |
| q3 | Y | q3 | Y | R |
| q3 | B | q4 | B | R |

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
| aabb | Accepted |
| aab | Rejected |
| ba | Rejected |

---

## Result

The TM successfully accepts strings of the form $a^n b^n$ and rejects others.

---

## Applications

- Computability theory
- Algorithm analysis
- Language recognition

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2012%20-%20Output.png)
