# Experiment 15: Design and Simulation of a Turing Machine (TM) Using Simulator

## Aim

To design and simulate a Turing Machine (TM) using a simulator to accept the input string $ww$ where $w \in \{a, b\}^*$.

---

## Problem Statement

Design a TM for the language $L = \{ ww \mid w \in \{a, b\}^* \}$.

---

## Theory

The TM first finds the middle of the string by marking symbols from both ends. Once the middle is found, it compares the first half with the second half symbol by symbol. If all symbols match, the string is accepted.

---

## States

- **q0** – Initial State
- **q_mid** – Find middle
- **q_match** – Match halves
- **q_accept** – Accepting State

---

## Input Alphabet

```
Σ = {a, b}, Γ = {a, b, X, Y, B}
```

---

## Transition Table

| Present State | Tape Symbol | Next State | Write Symbol | Move |
|---------------|-------------|------------|--------------|------|
| → q0 | a, b | q_mid | X, Y | R |
| ... | ... | ... | ... | ... |
| q_match | B | q_accept | B | R |

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
| abab | Accepted |
| aaaa | Accepted |
| aba | Rejected |
| abb | Rejected |

---

## Result

The TM successfully accepts strings of the form $ww$ and rejects others.

---

## Applications

- Pattern matching
- Data duplication checks
- Advanced string processing

---

## Conclusion

The automaton was successfully designed and simulated. It correctly accepts the specified valid strings and rejects all invalid strings, demonstrating the practical implementation of automata using simulation software.

---

## Output

![Output](EXP%2015%20-%20Output.png)
