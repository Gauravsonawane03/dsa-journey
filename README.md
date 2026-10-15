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

## Today's Progress — October 15, 2026

### LeetCode #20 — Valid Parentheses

- Applied stack fundamentals to bracket matching.
- Used a stack to track opening brackets and match closing brackets in the correct order.
- Handled mismatched brackets and invalid closing-bracket order.
- Submitted the solution successfully.

**Implementation:** `LeetCode/0020_valid_parentheses.cpp`

**Complexity:**
- Time: `O(N)`
- Auxiliary space: `O(N)`

### LeetCode #209 — Minimum Size Subarray Sum

- Implemented a sliding-window solution using two pointers.
- Expanded the window by moving the right pointer and maintaining the current sum.
- Shrunk the window from the left while its sum remained greater than or equal to the target.
- Tracked the minimum valid subarray length.
- Submitted the solution successfully.

**Pattern:** Sliding Window / Two Pointers

**Complexity:**
- Time: `O(N)`
- Auxiliary space: `O(1)`

### Stack Fundamentals

- Implemented basic stack operations using C++ STL.
- Practiced `push()`, `pop()`, `top()`, and `empty()`.
- Observed how the top element changes after a pop operation.

**Implementation:** `05_Stacks_Queues/01_stack_operations.cpp`

### Queue Fundamentals

- Implemented basic queue operations using C++ STL.
- Practiced `push()`, `pop()`, `front()`, `back()`, and `empty()`.
- Verified FIFO behaviour through insertion and removal operations.

**Implementation:** `05_Stacks_Queues/02_queue_operations.cpp`

### LeetCode #739 — Daily Temperatures

- Reconstructed the monotonic-stack solution from memory without opening the previous implementation.
- Used indices to track unresolved temperatures.
- Resolved previous days when a warmer temperature appeared.
- Calculated waiting days using the difference between indices.
- Compiled and ran the implementation successfully against a sample test case.

**Implementation:** `05_Stacks_Queues/03_daily_temperatures.cpp`

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