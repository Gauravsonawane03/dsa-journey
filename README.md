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
├── 05_Stacks_Queues/
├── LeetCode/
├── README.md
└── .gitignore
```

---

## Current Focus

**Stacks, Queues, Pattern Recognition & Retention**

Currently working on:

- Stack fundamentals and LIFO behaviour
- Queue fundamentals and FIFO behaviour
- Implementing stacks using queues and queues using stacks
- Stack and queue operations in C++
- Monotonic-stack reasoning
- Resolving previous elements using current elements
- Circular-array traversal
- Stack-based simulation and collision handling
- Array and hashing patterns
- Two pointers and sliding window
- Prefix sums and frequency maps
- Recursion and backtracking
- Dynamic programming
- Independent implementation
- Mixed-problem solving
- Testing and debugging
- Time and auxiliary-space analysis
- Retention of previously learned patterns

---

## Today's Progress — November 1, 2026

### LeetCode #622 — Design Circular Queue

- Implemented a circular queue using a vector in C++.
- Used front and rear indices to track the queue's elements.
- Maintained the current element count and maximum capacity.
- Implemented all required operations: `enQueue`, `deQueue`, `Front`, `Rear`, `isEmpty`, and `isFull`.
- Used modulo-based index movement to support circular traversal and reuse freed positions.
- Handled empty and full queue conditions, including resetting indices when the last element is removed.

**LeetCode implementation:** `LeetCode/0622_design_circular_queue.cpp`

**Pattern:** Circular Array + Queue Implementation

**Complexity:**
- Constructor: `O(k)`
- Enqueue: `O(1)`
- Dequeue: `O(1)`
- Front and Rear: `O(1)`
- isEmpty and isFull: `O(1)`
- Auxiliary space: `O(k)`

**Result:** Accepted — 59/59 test cases passed.

### LeetCode #525 — Contiguous Array

- Reconstructed the prefix-sum approach using the transformation `0 → -1` and `1 → +1`.
- Used a running prefix sum to identify subarrays containing equal numbers of zeroes and ones.
- Used an unordered map to store the earliest index of each prefix sum.
- Identified balanced subarrays through repeated prefix sums.
- Maintained the maximum subarray length using the difference between the current index and the earliest occurrence of the same prefix sum.

**LeetCode implementation:** `LeetCode/0525_contiguous_array.cpp`

**Pattern:** Prefix Sum + Hash Map + Earliest Index Tracking

**Complexity:**
- Time: `O(N)` expected
- Auxiliary space: `O(N)`

**Result:** Accepted — 566/566 test cases passed.

---

## Current DSA Progress

### Dynamic Programming

Current areas of practice include:

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

Problems practised include:

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

Patterns practised include:

- Recursion and backtracking
- Take/skip decisions
- Binary search
- Prefix sums and frequency maps
- Prefix sums with modulo frequency
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
- Monotonic stack
- Stack and queue transformations
- Circular queue implementation
- Stack-based collision simulation
- 1D DP
- 2D/Grid DP
- 0/1 Knapsack
- Subset-sum DP
- Unbounded-choice DP
- Fast and slow pointers
- Dummy-node linked-list technique

---

## Problem-Solving Approach

1. Understand the problem and its constraints.
2. Identify relevant concepts and patterns.
3. Develop a brute-force baseline.
4. Look for optimization opportunities.
5. Attempt the problem independently.
6. Implement the solution.
7. Test, debug, and examine edge cases.
8. Analyze time and auxiliary-space complexity.
9. Review the reasoning behind the solution.
10. Revisit older patterns through practice.
11. Improve independent problem-solving ability.
12. Commit meaningful work using Git.

The focus is on understanding, implementation, debugging, pattern recognition, and retention rather than maximizing problem count.

---

## Tools

- C++
- VS Code
- Git and GitHub
- LeetCode
- Striver A2Z

---

## Goal

Build strong algorithmic thinking and independent problem-solving ability for software engineering interviews.

The objective is to understand why solutions work, recognize reusable patterns, implement them independently, debug mistakes, analyze complexity, and apply learned patterns to unfamiliar problems.