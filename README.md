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
- String manipulation and grouping
- Testing and debugging
- Time and auxiliary-space analysis

---

## Today's Progress — October 11, 2026

### LeetCode #724 — Find Pivot Index

- Calculated the total sum of the array.
- Maintained a running left sum to determine the right sum at each index.
- Identified the pivot index where the left and right sums are equal.
- Implemented:

  `LeetCode/0724_find_pivot_index.cpp`

- Complexity:
  - Time: `O(N)`
  - Auxiliary space: `O(1)`

### LeetCode #49 — Group Anagrams

- Grouped strings using a sorted version of each string as a canonical key.
- Used `unordered_map<string, vector<string>>` to collect anagrams under the same key.
- Practiced string manipulation, hashing, and grouping.
- Implemented:

  `LeetCode/0049_group_anagrams.cpp`

- Complexity:
  - Time: `O(N × K log K)` average
  - Auxiliary space: `O(N × K)`

Here, `N` is the number of strings and `K` is the maximum string length.

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
- String grouping using canonical keys
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