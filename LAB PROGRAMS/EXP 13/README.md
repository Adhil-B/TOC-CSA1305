# Experiment 13: Design and Simulation of a Turing Machine (TM) Using Simulator

## Aim

To design and simulate a Turing Machine (TM) using a simulator to accept the input string $a^n b^{2n}$ where $n \ge 1$.

---

## Problem Statement

Design a TM for the language $L = \{ a^n b^{2n} \mid n \ge 1 \}$.

---

## Theory

To accept $a^n b^{2n}$, the TM replaces an 'a' with 'X', moves right to find two 'b's, replaces them with 'Y's, and moves left to repeat the process until all 'a's and 'b's are matched proportionally.

---

## States

- **q0** – Initial State (Find a)
- **q1** – Move right to find first b
- **q2** – Move right to find second b
- **q3** – Move left to find X
- **q4** – Check remaining Ys
- **q5** – Accepting State

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
| q0 | Y | q4 | Y | R |
| q1 | a, Y | q1 | a, Y | R |
| q1 | b | q2 | Y | R |
| q2 | Y | q2 | Y | R |
| q2 | b | q3 | Y | L |
| q3 | a, b, Y | q3 | a, b, Y | L |
| q3 | X | q0 | X | R |
| q4 | Y | q4 | Y | R |
| q4 | B | q5 | B | R |

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

The TM successfully accepts strings of the form $a^n b^{2n}$ and rejects others.

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

![Output](EXP%2013%20-%20Output.png)
