# Experiment 18: Design and Simulation of a Deterministic Finite Automaton (DFA) Using Simulator

## Aim

To design and simulate a Deterministic Finite Automaton (DFA) using a simulator to accept strings with an even number of 'a's.

---

## Problem Statement

Design a DFA for the language of strings over {a, b} containing an even number of 'a's.

---

## Theory

A DFA can track the parity (even or odd) of a specific character. It uses two states: one for even parity and one for odd parity. Reading an 'a' toggles the state, while reading a 'b' keeps the state unchanged. The even state is the accepting state.

---

## States

- **q0** – Initial & Accepting State (Even a's)
- **q1** – Odd a's

---

## Input Alphabet

```
Σ = {a, b}
```

---

## Transition Table

| Present State | a | b |
|---------------|---|---|
| →* q0 | q1 | q0 |
| q1 | q0 | q1 |

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
| aa | Accepted |
| aba | Accepted |
| bbb | Accepted |
| a | Rejected |
| ab | Rejected |

---

## Result

The DFA successfully accepts strings with an even number of 'a's and rejects others.

---

## Applications

- Parity checking
- Error detection
- State tracking

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2018%20-%20Output.png)
