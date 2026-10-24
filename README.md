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

## Today's Progress — October 24, 2026

### LeetCode #901 — Online Stock Span

- Reconstructed the `StockSpanner` implementation as a retention exercise.
- Used a monotonic stack of `(price, index)` pairs.
- Removed previous prices less than or equal to the current price to identify the previous greater price.
- Calculated the span using the current index and the index of the previous greater price.
- Tested the implementation locally.

**Practice file:** `05_Stacks_Queues/06_online_stock_span.cpp`

**LeetCode implementation:** `LeetCode/0901_online_stock_span.cpp`

**Pattern:** Monotonic Stack + Previous Greater Element

**Complexity:**
- Amortized time per call: `O(1)`
- Total time for `N` calls: `O(N)`
- Auxiliary space: `O(N)`

### LeetCode #735 — Asteroid Collision

- Implemented a stack-based simulation to determine which asteroids survive collisions.
- Maintained a stack containing only surviving asteroids in their original relative order.
- Handled collisions between right-moving and left-moving asteroids.
- Used repeated comparisons to handle multiple collisions caused by a single incoming asteroid.
- Handled cases where the incoming asteroid is destroyed, destroys the stack's top, or destroys both asteroids when their magnitudes are equal.
- Tested collision scenarios, including repeated collisions and an incoming asteroid that survives after destroying all asteroids in the stack.

**Implementation:** `LeetCode/0735_asteroid_collision.cpp`

**Pattern:** Stack Simulation + Conditional Repeated Collisions

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