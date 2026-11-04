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

## Today's Progress — November 4, 2026

### LeetCode #84 — Largest Rectangle in Histogram

- Implemented the optimized solution using a monotonic increasing stack of indices.
- Used the previous smaller element (PSE) and next smaller element (NSE) to determine the maximum rectangle width for each bar.
- Derived the width formula:

  `width = nse - pse - 1`

- Used the current index as the next smaller boundary when popping an index.
- Used the new stack top as the previous smaller boundary, or `-1` when the stack becomes empty.
- Used a sentinel height of `0` to process the remaining elements in the stack.
- Tested the implementation and submitted successfully.

**LeetCode implementation:** `LeetCode/0084_largest_rectangle_in_histogram.cpp`

**Pattern:** Monotonic Stack + Previous/Next Smaller Element

**Complexity:**
- Time: `O(N)`
- Auxiliary space: `O(N)`

**Result:** Accepted — 99/99 test cases passed.

### LeetCode #496 — Next Greater Element I

- Revisited the monotonic decreasing stack approach.
- Reconstructed the algorithm's reasoning and reviewed the mapping of elements to their next greater elements.
- Retained the existing practice implementation.

**Practice implementation:** `05_Stacks_Queues/04_next_greater_element_i_retention.cpp`

**Pattern:** Monotonic Stack + Hash Map

### LeetCode #1 — Two Sum

- Revisited the brute-force approach using pair checking.
- Reviewed the optimized hash-map approach using the complement `target - nums[i]`.
- Recalled why the lookup must happen before inserting the current element to avoid using the same element twice.

**Pattern:** Hash Map + Complement Lookup

**Complexity:**
- Brute force: `O(N²)` time, `O(1)` auxiliary space
- Optimized: `O(N)` average time, `O(N)` auxiliary space

### LeetCode #78 — Subsets

- Revisited recursion and backtracking using the include/exclude approach.
- Understood why an array of size `N` produces `2^N` possible subsets.
- Derived the recursion tree and the base case for storing completed subsets.
- Used `pop_back()` to restore the previous state before exploring the exclude branch.

**Pattern:** Recursion + Backtracking + Include/Exclude Decisions

### Linked List — Iterative Reversal

- Revisited iterative linked-list reversal using three pointers: `prev`, `curr`, and `next`.
- Traced the reversal of a three-node linked list.
- Understood why the next node must be saved before reversing the current node's link.
- Updated the head pointer to the previous node after completing the traversal.

**Pattern:** Three-Pointer Technique + In-Place Reversal

**Complexity:**
- Time: `O(N)`
- Auxiliary space: `O(1)`

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