# Experiment 20: Design and Simulation of a Deterministic Finite Automaton (DFA) Using Simulator

## Aim

To design and simulate a Deterministic Finite Automaton (DFA) using a simulator to accept strings ending with 'ab' over the alphabet {a, b}.

---

## Problem Statement

Design a DFA for the language of strings over {a, b} that end with the substring 'ab'.

---

## Theory

To detect a specific suffix, the DFA must track the most recently read characters. It requires states to represent having read nothing of the suffix, having read 'a', and having read 'ab'.

---

## States

- **q0** – Initial State
- **q1** – Read 'a'
- **q2** – Accepting State (Read 'ab')

---

## Input Alphabet

```
Σ = {a, b}
```

---

## Transition Table

| Present State | a | b |
|---------------|---|---|
| → q0 | q1 | q0 |
| q1 | q1 | q2 |
| * q2 | q1 | q0 |

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
| aab | Accepted |
| bab | Accepted |
| aba | Rejected |
| a | Rejected |

---

## Result

The DFA successfully accepts strings ending with 'ab' and rejects others.

---

## Applications

- Pattern matching
- Lexical analysis
- Substring search

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2020%20-%20Output.png)
