# Experiment 14: Design and Simulation of a Turing Machine (TM) Using Simulator

## Aim

To design and simulate a Turing Machine (TM) using a simulator to accept palindrome strings (e.g., `ababa`).

---

## Problem Statement

Design a TM for the language of palindromes over the alphabet {a, b}.

---

## Theory

A palindrome reads the same forwards and backwards. The TM reads the first symbol, replaces it with a blank, moves to the end of the string, checks if the last symbol matches the first, replaces it with a blank, and returns to the start. This repeats until 0 or 1 symbol remains.

---

## States

- **q0** – Initial State
- **q1, q2** – Move right
- **q3, q4** – Match and move left
- **q5** – Return to start
- **q6** – Accepting State

---

## Input Alphabet

```
Σ = {a, b}, Γ = {a, b, B}
```

---

## Transition Table

| Present State | Tape Symbol | Next State | Write Symbol | Move |
|---------------|-------------|------------|--------------|------|
| → q0 | a | q1 | B | R |
| → q0 | b | q2 | B | R |
| → q0 | B | q6 | B | R |
| q1 | a, b | q1 | a, b | R |
| q1 | B | q3 | B | L |
| q2 | a, b | q2 | a, b | R |
| q2 | B | q4 | B | L |
| q3 | a | q5 | B | L |
| q3 | B | q6 | B | R |
| q4 | b | q5 | B | L |
| q4 | B | q6 | B | R |
| q5 | a, b | q5 | a, b | L |
| q5 | B | q0 | B | R |

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
| ababa | Accepted |
| abba | Accepted |
| aba | Accepted |
| ab | Rejected |

---

## Result

The TM successfully accepts palindrome strings and rejects non-palindromes.

---

## Applications

- String processing
- DNA sequence analysis
- Data validation

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2014%20-%20Output.png)
