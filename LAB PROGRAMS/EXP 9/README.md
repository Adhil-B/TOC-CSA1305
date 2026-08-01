# Experiment 9: Design and Simulation of a Deterministic Finite Automaton (DFA) Using AutoSim

## Aim

To design and simulate a Deterministic Finite Automaton (DFA) using **AutoSim** that accepts only the input strings **"a"**, **"ac"**, and **"bac"** over the alphabet **Σ = {a, b, c}**.

---

## Problem Statement

Design a Deterministic Finite Automaton (DFA) using **AutoSim** to accept only the following strings:

- a
- ac
- bac

All other strings over the alphabet **{a, b, c}** must be rejected.

---

## Theory

A **Deterministic Finite Automaton (DFA)** is a finite-state machine in which every state has exactly one transition for each input symbol. A string is accepted if, after processing all input symbols, the automaton reaches an accepting state.

In this experiment, the DFA is designed to recognize exactly three valid strings:

- **a**
- **ac**
- **bac**

Each valid string follows a unique path from the initial state to an accepting state. Any incorrect input or additional characters lead to a dead state.

---

## States

- **q0** – Initial State
- **q1** – After reading `a`
- **q2** – After reading `b`
- **q3** – After reading `ba`
- **q4** – Accepting state for `ac`
- **q5** – Accepting state for `bac`
- **qd** – Dead state

---

## Input Alphabet

```
Σ = {a, b, c}
```

---

## Transition Table

| Present State | a | b | c |
|---------------|---|---|---|
| → q0 | q1 | q2 | qd |
| * q1 | qd | qd | q4 |
| q2 | q3 | qd | qd |
| q3 | qd | qd | q5 |
| * q4 | qd | qd | qd |
| * q5 | qd | qd | qd |
| qd | qd | qd | qd |

---

## Procedure

1. Open the **AutoSim** software.
2. Create the required states (**q0, q1, q2, q3, q4, q5, qd**).
3. Mark **q0** as the initial state.
4. Mark **q1, q4, and q5** as accepting states.
5. Add the transitions according to the transition table.
6. Save the automaton.
7. Test the DFA using different input strings.
8. Verify whether the strings are accepted or rejected.

---

## Test Cases

| Input String | Expected Result |
|--------------|-----------------|
| a | Accepted |
| ac | Accepted |
| bac | Accepted |
| abc | Rejected |
| ba | Rejected |
| aa | Rejected |

---

## Result

The DFA designed in **AutoSim** successfully accepts only the strings **"a"**, **"ac"**, and **"bac"**, while rejecting all other input strings.

---

## Applications

- Lexical analysis in compiler design
- Pattern matching
- Token recognition
- Input validation
- Automata simulation
- Formal language processing

---

## Conclusion

The Deterministic Finite Automaton (DFA) was successfully designed and simulated using **AutoSim**. The automaton correctly accepts the specified strings **"a"**, **"ac"**, and **"bac"**, and rejects all other strings, demonstrating the practical implementation of finite automata using simulation software.