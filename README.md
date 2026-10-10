# Data Structures & Algorithms Journey

This repository documents my DSA learning through structured problem solving, implementation, and interview-oriented practice.

The goal is to develop strong algorithmic thinking, recognize reusable patterns, and solve problems independently.

---

## Repository Structure

```text
DSA/
├── 01_Arrays/
├── 02_Linked_List/
├── 03_Recursion/
├── 04_DP/
├── HackerRank/
├── LeetCode/
├── README.md
└── .gitignore
```

---

## Current Focus

**Dynamic Programming, Knapsack Variations & Pattern Recognition**

Currently working on:

- Recursive problem decomposition
- Base-case reasoning
- Take/skip recursion
- Backtracking and undo
- Path and state tracking
- Memoization
- Tabulation
- DP state definition
- Recurrence derivation
- Repeated-subproblem recognition
- 1D DP
- 2D/Grid DP
- 0/1 Knapsack
- Subset-sum DP
- Coin Change and unbounded-choice DP
- Pattern recognition
- Independent implementation
- Mixed-problem solving
- Retention of previously learned patterns
- Linked-list pointer techniques
- Hashing and frequency counting
- Testing and debugging
- Time and auxiliary-space analysis

---

## Today's Progress — October 10, 2026

### LeetCode #128 — Longest Consecutive Sequence

- Stored array elements in an unordered set for efficient membership checks.
- Identified sequence starts by checking whether the preceding value exists.
- Counted consecutive values from each sequence start.
- Used set iteration to process distinct values.
- Implemented:

  `LeetCode/0128_longest_consecutive_sequence.cpp`

- Complexity:
  - Time: `O(N)` average
  - Auxiliary space: `O(N)`

### LeetCode #63 — Unique Paths II

- Implemented a two-dimensional DP table to count paths through a grid containing obstacles.
- Initialized the starting cell according to whether it was blocked.
- Set obstacle cells to zero paths.
- Calculated paths to each free cell using the values from above and the left.
- Returned the path count at the destination.
- Implemented:

  `LeetCode/0063_unique_paths_ii.cpp`

- Complexity:
  - Time: `O(M × N)`
  - Auxiliary space: `O(M × N)`

---

## Current DSA Progress

### Dynamic Programming

Current focus includes:

- 1D DP
- 2D/Grid DP
- 0/1 Knapsack
- Subset-sum DP
- Coin Change and unbounded-choice DP
- DP state definition
- Recurrence derivation
- Memoization
- Tabulation
- Path and cost optimization
- Take/skip decision DP

Recent DP problems include:

- Climbing Stairs
- House Robber
- 1/2/3-step Climbing Stairs
- Min Cost Climbing Stairs
- Unique Paths
- Unique Paths II
- Longest Increasing Subsequence
- Minimum Path Sum
- 0/1 Knapsack
- Partition Equal Subset Sum
- Coin Change
- Minimum Falling Path Sum

### Pattern Recognition

Practiced patterns include:

- Recursion and backtracking
- Take/skip decisions
- Binary search
- Prefix sum and frequency maps
- Prefix sum with modulo frequency
- Two pointers
- Sliding window
- One-pass minimum tracking
- Boyer–Moore voting
- Hash-map complement lookup
- Prefix/suffix products
- Frequency counting
- Bucket-based grouping
- Consecutive-sequence detection using hashing
- 1D DP
- 2D/Grid DP
- 0/1 Knapsack
- Subset-sum DP
- Unbounded-choice DP
- Fast and slow pointers
- Dummy-node linked-list technique

### Problem-Solving Approach

1. Understand the problem.
2. Identify the relevant pattern.
3. Develop a brute-force approach.
4. Look for optimization opportunities.
5. Attempt independently.
6. Implement the solution.
7. Test and debug.
8. Analyze time and space complexity.
9. Review edge cases.
10. Revisit older patterns through unannounced practice.
11. Improve independent problem-solving ability.
12. Commit meaningful work.

The focus is on understanding, implementation, pattern recognition, debugging, and retention rather than maximizing problem count.

---

## Tools

- C++
- VS Code
- Git and GitHub
- LeetCode
- HackerRank
- Striver A2Z

---

## Goal

Build strong algorithmic thinking and independent problem-solving ability for software engineering interviews.

The objective is to understand why solutions work, recognize reusable patterns, implement them independently, debug mistakes, analyze complexity, and apply learned patterns to unfamiliar problems.
