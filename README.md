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

**Dynamic Programming, 2D/Grid DP & Pattern Recognition**

Currently working on:

- Recursive problem decomposition
- Base-case reasoning
- Take/skip recursion
- Backtracking and undo
- Path/state tracking
- Memoization
- Tabulation
- DP state definition
- Recurrence derivation
- Repeated-subproblem recognition
- Pattern recognition
- Independent implementation
- Mixed/unannounced problem solving
- Older-pattern retention
- 2D/Grid DP
- 2D vector and matrix representation
- Testing and debugging
- Time and auxiliary-space analysis

---

## Today's Progress — October 4, 2026

### 2D Vector / Matrix Practice

- Practiced `vector<vector<int>>` from a blank file.
- Worked with rows, columns, and `dp[i][j]` indexing.
- Created and initialized an `m × n` matrix.
- Practiced nested row/column iteration.
- Reinforced zero-based indexing:
  - `i = 0 ... m-1`
  - `j = 0 ... n-1`
- Implemented a small 2D vector exercise before returning to DP.

### LeetCode #62 — Unique Paths

- Reconstructed **Unique Paths** from a blank file.
- Defined `dp[i][j]` as the number of unique paths to reach cell `(i, j)`.
- Identified the two previous cells:
  - `(i-1, j)`
  - `(i, j-1)`
- Derived:

  `dp[i][j] = dp[i-1][j] + dp[i][j-1]`

- Implemented the first row and first column base cases.
- Added the solution to:

  `04_DP/unique_paths_2d_grid_dp.cpp`

- Tested:
  - `3 × 3 → 6`
  - `3 × 2 → 3`
  - `1 × 5 → 1`
- Complexity:
  - Time: `O(m × n)`
  - Space: `O(m × n)`

### LeetCode #64 — Minimum Path Sum

- Solved **Minimum Path Sum** as a fresh 2D/Grid DP problem.
- Defined `dp[i][j]` as the minimum path sum required to reach cell `(i, j)`.
- Derived:

  `dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]`

- Derived the starting cell, first-row, and first-column cases.
- Implemented the solution in:

  `LeetCode/0064_minimum_path_sum.cpp`

- Tested the standard example successfully.
- Complexity:
  - Time: `O(m × n)`
  - Space: `O(m × n)`

### LeetCode #238 — Product of Array Except Self

- Solved **Product of Array Except Self** as an unannounced pattern problem.
- Derived the prefix/suffix product approach.
- Used two passes:
  - Left → right for products of elements to the left.
  - Right → left for products of elements to the right.
- Avoided division.
- Implemented the solution in:

  `LeetCode/0238_product_of_array_except_self.cpp`

- Tested:
  - `[1,2,3,4] → [24,12,8,6]`
  - `[-1,1,0,-3,3] → [0,0,9,0,0]`
- Complexity:
  - Time: `O(N)`
  - Extra space: `O(1)` excluding the output array.

---

## Current DSA Progress

### Dynamic Programming

Current focus includes:

- 1D DP
- 2D/Grid DP
- DP state definition
- Recurrence derivation
- Memoization
- Tabulation
- Path and cost optimization problems

Recent DP problems include:

- Climbing Stairs
- House Robber
- 1/2/3-step Climbing Stairs
- Min Cost Climbing Stairs
- Unique Paths
- Longest Increasing Subsequence
- Minimum Path Sum

### Pattern Recognition

Practiced patterns include:

- Recursion / Backtracking
- Take/skip recursion
- Binary Search
- Prefix Sum + Frequency Map
- Prefix Sum + Modulo Frequency
- Two Pointers
- Sliding Window
- One-pass Minimum Tracking
- Boyer–Moore Voting
- Hashmap-based Complement Lookup
- Prefix/Suffix Products
- 1D DP
- 2D/Grid DP

### Problem-Solving Approach

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

The focus is on understanding, independent implementation, pattern recognition, debugging, and retention rather than maximizing problem count.

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