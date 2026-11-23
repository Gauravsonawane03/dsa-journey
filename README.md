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
├── 06_Trees/
├── LeetCode/
├── README.md
└── .gitignore
```

---

## Current Focus

**Binary Trees, Recursion & Traversal Patterns**

Currently working on:

- Binary tree fundamentals
- TreeNode representation using pointers
- Root, parent, child and leaf relationships
- Depth vs height
- Subtrees
- Balanced and unbalanced trees
- Degenerate/skewed trees
- Recursive tree traversal
- Preorder traversal
- Inorder traversal
- Postorder traversal
- Base cases and recursion termination
- Time and auxiliary-space analysis
- Independent implementation
- Pattern recognition
- Mixed-problem solving
- Testing and debugging
- Retention of previously learned patterns

---

## Today's Progress — November 23, 2026

### Binary Trees — Basic Structure & Traversals

- Rebuilt a basic binary tree in C++ using a `TreeNode` structure.
- Used pointers to connect nodes through `left` and `right` child references.
- Created and traversed the following tree:

```text
        1
       / \
      2   3
     / \
    4   5
```

### Preorder Traversal

- Implemented recursive preorder traversal.
- Processing order:

```text
Root → Left → Right
```

- Output:

```text
1 2 4 5 3
```

- Used `nullptr` as the base case for recursion.

### Inorder Traversal

- Implemented recursive inorder traversal.
- Processing order:

```text
Left → Root → Right
```

- Output:

```text
4 2 5 1 3
```

### Postorder Traversal

- Implemented recursive postorder traversal.
- Processing order:

```text
Left → Right → Root
```

- Output:

```text
4 5 2 3 1
```

### Complexity

For all three recursive traversals:

- Time: `O(N)`
- Auxiliary space: `O(H)`

where `N` is the number of nodes and `H` is the height of the tree.

### Practice

Applied preorder and inorder traversal patterns to a fresh binary tree variation to verify understanding beyond the original example.

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
- Binary tree traversal

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