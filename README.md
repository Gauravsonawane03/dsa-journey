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

**Recursion & Backtracking**

Currently strengthening:

- Recursive problem decomposition
- Base-case reasoning
- Take/skip recursion
- Backtracking and undo
- Path/state tracking
- Visited-state management
- Independent implementation
- Pattern recognition
- Retention of older DSA patterns
- Testing and debugging
- Time and auxiliary space analysis

---

## Today's Progress — September 26, 2026

### Rat in a Maze

- Implemented Rat in a Maze using recursive backtracking.
- Used four-direction movement: Down, Up, Right, Left.
- Applied boundary, open-cell, and visited-cell validation.
- Used `push_back()` / `pop_back()` to maintain the current path.
- Marked cells before recursion and unmarked them during backtracking.
- Handled blocked starting cells and tested the implementation.
- Analyzed recursive search complexity and auxiliary space.

### LeetCode #78 — Subsets

- Recognized the take/skip recursion pattern.
- Implemented subset generation using recursive choices and backtracking.
- Tested successfully on LeetCode.
- Added the solution to `LeetCode`.

### LeetCode #153 — Find Minimum in Rotated Sorted Array

- Identified the binary-search pattern independently.
- Used comparison with `nums[right]` to reduce the search space.
- Implemented `O(log N)` time and `O(1)` auxiliary space.
- Accepted with all test cases passing.
- Added the solution to `LeetCode`.

### LeetCode #560 — Subarray Sum Equals K

- Identified prefix sum + hashing independently.
- Used prefix-sum frequencies to count all valid subarrays.
- Applied `freq[0] = 1` to handle subarrays beginning at index `0`.
- Implemented `O(N)` average time and `O(N)` space.
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