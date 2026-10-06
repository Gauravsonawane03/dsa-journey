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

**Dynamic Programming, Knapsack Variations & Pattern Recognition**

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
- 1D DP
- 2D/Grid DP
- 0/1 Knapsack
- Subset-sum style DP
- Coin Change / unbounded-choice DP
- Pattern recognition
- Independent implementation
- Mixed/unannounced problem solving
- Older-pattern retention
- Linked-list pointer techniques
- Testing and debugging
- Time and auxiliary-space analysis

---

## Today's Progress — October 6, 2026

### 0/1 Knapsack — Retrieval & Reinforcement

- Reconstructed the 2D 0/1 Knapsack implementation from memory.
- Reinforced DP state, base cases, and take/skip transitions.
- Practiced the distinction between taking an item once and allowing repeated choices.
- Implementation:

`04_DP/knapsack_retrieval_check.cpp`

- Complexity:
  - Time: `O(N × Capacity)`
  - Space: `O(N × Capacity)`

### LeetCode #322 — Coin Change

- Applied dynamic programming to an unbounded-choice problem.
- Defined a 2D DP state based on available coins and target amount.
- Derived take/skip transitions.
- Distinguished unlimited coin usage from 0/1 Knapsack.
- Used bottom-up tabulation.
- Implemented:

`LeetCode/0322_coin_change.cpp`

- Complexity:
  - Time: `O(N × Amount)`
  - Space: `O(N × Amount)`

### LeetCode #19 — Remove Nth Node From End of List

- Applied linked-list pointer techniques.
- Used a dummy node with fast and slow pointers.
- Removed the target node in a single traversal.
- Implemented:

`LeetCode/0019_remove_nth_node_from_end_of_list.cpp`

- Complexity:
  - Time: `O(N)`
  - Extra space: `O(1)`

---

## Current DSA Progress

### Dynamic Programming

Current focus includes:

- 1D DP
- 2D/Grid DP
- 0/1 Knapsack
- Subset-sum DP
- Coin Change / unbounded-choice DP
- DP state definition
- Recurrence derivation
- Memoization
- Tabulation
- Path and cost optimization problems
- Take/skip decision DP

Recent DP problems include:

- Climbing Stairs
- House Robber
- 1/2/3-step Climbing Stairs
- Min Cost Climbing Stairs
- Unique Paths
- Longest Increasing Subsequence
- Minimum Path Sum
- 0/1 Knapsack
- Partition Equal Subset Sum
- Coin Change

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
- 0/1 Knapsack
- Subset-Sum DP
- Unbounded-choice DP
- Fast and Slow Pointers
- Dummy Node Linked List Technique

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