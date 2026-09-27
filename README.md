# Data Structures & Algorithms Journey

This repository documents my DSA learning through structured problem solving, independent implementation, and interview-oriented practice.

The goal is to develop strong algorithmic thinking, recognize reusable patterns, and solve problems independently.

---

## Repository Structure

DSA

├── 01_Arrays

├── 02_Linked_List

├── 03_Recursion

├── HackerRank

├── LeetCode

├── README.md

└── .gitignore

---

## Current Focus

**Recursion, Backtracking & Dynamic Programming**

Currently strengthening:

- Recursive problem decomposition
- Base-case reasoning
- Take/skip recursion
- Backtracking and undo
- Path/state tracking
- Visited-state management
- Memoization
- Repeated-subproblem recognition
- Pattern recognition
- Independent implementation
- Retention of older DSA patterns
- Testing and debugging
- Time and auxiliary space analysis

---

## Today's Progress — September 27, 2026

### LeetCode #974 — Subarray Sums Divisible by K

- Identified the prefix-sum remainder pattern.
- Used prefix-sum remainder frequencies to count valid subarrays.
- Applied `freq[0] = 1` to handle subarrays beginning at index `0`.
- Handled negative remainders using modulo normalization.
- Implemented `O(N)` average time and `O(N)` space.
- Accepted with all test cases passing.
- Added the solution to `LeetCode`.

### LeetCode #11 — Container With Most Water

- Identified the two-pointer pattern independently.
- Used the shorter-height pointer movement rule.
- Calculated container area using width and the limiting height.
- Implemented `O(N)` time and `O(1)` auxiliary space.
- Debugged and tested the implementation successfully.
- Accepted with all test cases passing.
- Added the solution to `LeetCode`.

### New Pattern — Memoization / Dynamic Programming

- Derived the recurrence for the Climbing Stairs problem.
- Identified repeated subproblems in the recursive solution.
- Introduced memoization by storing previously calculated results.
- Understood `dp[i]` as the stored result for a subproblem.
- Analyzed the optimized solution as `O(N)` time and `O(N)` auxiliary space.
- Current capability: understood and implemented with guidance; further independent application is required for retention.

### LeetCode #70 — Climbing Stairs

- Implemented Climbing Stairs using recursive memoization.
- Used a separate recursive helper with a shared `dp` array.
- Applied base cases and memoization checks.
- Tested successfully on LeetCode.
- Accepted with all test cases passing.
- Added the solution to `LeetCode`.

---

## Problem-Solving Approach

1. Understand the problem
2. Identify the pattern
3. Develop the approach
4. Attempt independently
5. Implement
6. Test and debug
7. Analyze time and space complexity
8. Review edge cases
9. Commit the work

The focus is on demonstrated understanding, independent implementation, and retention rather than simply increasing the number of problems solved.

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

The objective is to understand why solutions work, recognize reusable patterns, implement them independently, and apply them to unfamiliar problems.