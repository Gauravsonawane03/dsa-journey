# Data Structures & Algorithms Journey

This repository documents my DSA learning through structured problem solving, independent implementation, and interview-oriented practice.

The goal is to develop strong algorithmic thinking, recognize reusable patterns, and solve problems independently.

---

## Repository Structure

DSA

├── 01_Arrays
├── 02_Linked_List
├── 03_Recursion
├── 04_DP
├── HackerRank
├── LeetCode
├── README.md
└── .gitignore

---

## Current Focus

**Dynamic Programming, Pattern Recognition & Retention**

Currently strengthening:

- Recursive problem decomposition
- Base-case reasoning
- Take/skip recursion
- Backtracking and undo
- Path/state tracking
- Visited-state management
- Memoization
- Tabulation
- DP state definition
- Recurrence derivation
- Repeated-subproblem recognition
- Pattern recognition
- Independent implementation
- Retention of older DSA patterns
- Mixed/unannounced problem solving
- Testing and debugging
- Time and auxiliary space analysis

---

## Today's Progress — October 1, 2026

### Dynamic Programming — Restart & Retention

- Restarted Dynamic Programming from first principles after a short break.
- Revisited the purpose of DP and the idea of solving overlapping subproblems once and reusing stored results.
- Revisited the distinction between a DP state and the value stored in that state.
- Revisited memoization as top-down recursion with stored results.
- Learned tabulation as a bottom-up DP approach.
- Connected DP recurrence design to the choices available at each state.

### LeetCode #70 — Climbing Stairs

- Revisited the Climbing Stairs recurrence.
- Identified `dp[n]` as the number of distinct ways to reach step `n`.
- Revisited the relationship between the final move and the recurrence.
- Revisited memoization and repeated-subproblem elimination.
- Existing memoization practice remains in `03_Recursion/climbing_stairs_memoization.cpp` as recall work.

### Dynamic Programming — House Robber

- Solved House Robber as a fresh DP problem.
- Defined the state as the maximum money obtainable from houses `0..i` without robbing adjacent houses.
- Derived the two choices at each house: skip the current house or rob it.
- Derived the recurrence:

  `dp[i] = max(dp[i-1], nums[i] + dp[i-2])`

- Implemented the solution using recursive memoization from a blank file.
- Tested empty input and multiple normal cases successfully.
- Analyzed the solution as `O(N)` time and `O(N)` auxiliary space.
- Current capability: implemented and applied with guided derivation; further independent retention is required.

### Dynamic Programming — Climbing Stairs with 1, 2, or 3 Steps

- Derived the recurrence for the number of ways to reach step `n` when 1, 2, or 3 steps can be taken.
- Defined `dp[i]` as the number of distinct ways to reach step `i`.
- Derived:

  `dp[i] = dp[i-1] + dp[i-2] + dp[i-3]`

- Learned and implemented bottom-up tabulation from a blank file.
- Added base cases for `n = 0`, `n = 1`, and `n = 2`.
- Tested multiple values including `0`, `1`, `2`, `3`, `4`, and `5`.
- Implemented `O(N)` time and `O(N)` auxiliary space.
- Added the solution to `04_DP`.

### LeetCode #121 — Best Time to Buy and Sell Stock

- Initially analyzed the brute-force idea of checking possible buy/sell pairs.
- Identified the optimized one-pass approach through guided reasoning.
- Maintained the lowest price seen so far.
- Calculated the profit possible if selling on the current day.
- Updated maximum profit and then updated the minimum price for future days.
- Implemented and tested the solution successfully.
- Accepted with all test cases passing.
- Implemented `O(N)` time and `O(1)` auxiliary space.
- Added the solution to `LeetCode`.
- Pattern recognition required guidance; implementation was completed independently after deriving the approach.

### LeetCode #169 — Majority Element

- Started with a frequency-counting approach using a hash map.
- Identified the brute-force/HashMap complexity as `O(N)` time and `O(N)` space.
- Derived the cancellation idea from the majority-element guarantee.
- Learned the candidate/count approach behind the Boyer–Moore Voting Algorithm.
- Used:
  - `count == 0` → select the current number as the candidate and reset count to `1`
  - current number equals candidate → increment count
  - current number differs from candidate → decrement count
- Implemented the algorithm from a blank solution.
- Debugged an incorrect `count == 0` case after the first submission.
- Accepted with all test cases passing.
- Final complexity: `O(N)` time and `O(1)` auxiliary space.
- Added the solution to `LeetCode`.
- Current capability: applied with guided derivation and debugging; independent retention requires later unannounced recall.

### Mixed Pattern Practice

- Continued unannounced problem practice after the main DP work.
- #121 tested recognition of a one-pass minimum-tracking pattern.
- #169 introduced a new cancellation/voting pattern.
- Focus remained on reasoning, implementation, debugging, and complexity rather than maximizing problem count.

---

## Capability Status

### Dynamic Programming

**Current state: UNDERSTOOD → IMPLEMENTED → APPLIED**

- Memoization has been implemented through Climbing Stairs and House Robber.
- Tabulation has been implemented through the 1/2/3-step Climbing Stairs problem.
- DP state and recurrence reasoning are becoming clearer.
- Independent retention is still required through later fresh and unannounced problems.

### Pattern Recognition

**Current state: APPLIED**

Demonstrated patterns include:

- Recursion / backtracking
- Take/skip recursion
- Binary search
- Prefix sum + frequency map
- Prefix sum + modulo frequency
- Two pointers
- One-pass minimum tracking
- Boyer–Moore cancellation/voting

Pattern recognition is improving, but several newer patterns still require guided derivation before independent implementation.

### Independent Problem Solving

- Successfully implemented several problems independently after understanding the underlying approach.
- Mixed/unannounced practice is being used to test transfer rather than relying only on topic-labelled problems.
- Current focus is gradually increasing independent recognition and reducing reliance on guidance.

---

## Problem-Solving Approach

1. Understand the problem
2. Identify the pattern
3. Develop the brute-force approach
4. Look for optimization
5. Attempt independently
6. Implement
7. Test and debug
8. Analyze time and space complexity
9. Review edge cases
10. Revisit older patterns through unannounced practice
11. Record demonstrated capability
12. Commit the work

The focus is on demonstrated understanding, independent implementation, pattern recognition, debugging, and retention rather than simply increasing the number of problems solved.

---

## Tools

- C++
- VS Code
- Git & GitHub
- LeetCode
- HackerRank
- Striver A2Z

---

## Goal

Build strong algorithmic thinking and independent problem-solving ability for software engineering interviews.

The objective is to understand why solutions work, recognize reusable patterns, implement them independently, debug mistakes, analyze complexity, and apply learned patterns to unfamiliar problems.