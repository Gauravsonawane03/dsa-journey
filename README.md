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

## Today's Progress — October 18, 2026

### LeetCode #225 — Implement Stack using Queues

- Implemented a stack using a single queue.
- Used queue rotation during insertion to place the newest element at the front.
- Implemented `push()`, `pop()`, `top()`, and `empty()`.
- Debugged a loop-boundary error during testing.
- Submitted the solution successfully.

**Implementation:** `LeetCode/0225_implement_stack_using_queues.cpp`

**Complexity:**
- `push()`: `O(N)`
- `pop()`: `O(1)`
- `top()`: `O(1)`
- `empty()`: `O(1)`

### LeetCode #232 — Implement Queue using Stacks

- Implemented a queue using two stacks.
- Used element transfers between the stacks to preserve FIFO behaviour.
- Implemented `push()`, `pop()`, `peek()`, and `empty()`.
- Tested queue ordering with multiple insertions and removals.
- Submitted the solution successfully.

**Implementation:** `LeetCode/0232_implement_queue_using_stacks.cpp`

**Complexity:**
- `push()`: `O(N)`
- `pop()`: `O(1)`
- `peek()`: `O(1)`
- `empty()`: `O(1)`

### LeetCode #525 — Contiguous Array

- Recreated the solution and submitted it successfully.
- Transformed `0` into `-1` and kept `1` as `+1`, reducing the problem to finding a zero-sum subarray.
- Used prefix sums and a hash map to identify repeated prefix sums.
- Preserved the earliest index for each prefix sum to maximize subarray length.
- Tested balanced and unbalanced input cases.

**Implementation:** `LeetCode/0525_contiguous_array.cpp`

**Pattern:** Prefix Sum + Hash Map

**Complexity:**
- Time: `O(N)`
- Auxiliary space: `O(N)`

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