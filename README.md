# Data Structures & Algorithms Journey

This repository documents my journey of learning Data Structures & Algorithms through structured problem solving and interview preparation.

The goal is to develop strong algorithmic thinking, recognize common problem-solving patterns, and build the skills required for software engineering interviews.

---

## Repository Structure

DSA

│

├── 01_Arrays

├── HackerRank

├── LeetCode

├── README.md

└── .gitignore

---

## Progress

### Completed / Practiced

- Time & Space Complexity
- Array Fundamentals
- Searching
- Two Pointers
- Sliding Window
- Hashing
- Frequency Counting
- Prefix Sum
- Prefix Sum Indexing
- Prefix Sum + Hash Map
- Range Sum Queries
- Subarray Sum
- Running Sum
- Longest Zero-Sum Subarray
- Longest Subarray with Sum K
- Subarray Sum Equals K
- Two Sum
- Longest Subarray with Equal 0s and 1s
  - Prefix Sum Transformation
  - Hash Map
  - Zero-Sum Subarray Reasoning
- Longest Consecutive Sequence
  - Hash Set
  - Sequence Start Detection
  - Consecutive Sequence Expansion
- Minimum Size Subarray
  - Sliding Window
  - Two Pointers
  - Variable-Size Window
- Pattern Recognition Practice
  - Choosing between Prefix Sum, Hash Map, Hash Set, and Sliding Window
  - Identifying when a recently learned pattern does not apply
- Common Array Manipulation Patterns

---

## Current Topic

**Arrays**

Strengthening array problem-solving patterns through progressively harder problems, with emphasis on:

- Pattern recognition
- Prefix sums
- Hashing and frequency maps
- Hash sets
- Two pointers
- Sliding window
- Subarray problems
- Independent problem solving
- Choosing the appropriate approach rather than memorizing patterns

---

## Latest Learning Log

### August 30, 2026 — Mixed-Pattern Practice

- Continued the mixed-problem workflow:
  - Quick pattern recall
  - Pattern selection before coding
  - Reasoning before implementation
  - Independent implementation
  - Testing and debugging

- Longest Distinct Subarray
  - Sliding Window + Hash Set
  - Maintained a window containing only distinct elements
  - Used the hash set to detect duplicates
  - Shrunk the window until the duplicate was removed
  - O(N) time
  - O(N) space

- Longest Subarray with Sum K
  - Prefix Sum + Hash Map
  - Used `currentPrefixSum - k` to identify valid subarrays
  - Stored the earliest index for each prefix sum
  - Understood why `prefixSum[0] = -1` is required
  - Handled negative values
  - O(N) time
  - O(N) space

- Strengthened pattern recognition:
  - Contiguous subarray + distinct elements → Sliding Window + Hash Set
  - Contiguous subarray + exact sum + negative values → Prefix Sum + Hash Map
  - Avoiding incorrect pattern selection based only on keywords such as "sum" or negative values

- Practiced previously encountered concepts without referring to previous implementations, focusing on independent recall, reasoning, implementation, debugging, and pattern transfer.

---

## Upcoming

- Sorting
- Strings
- Recursion
- Linked Lists
- Stacks & Queues
- Trees
- Graphs
- Heaps
- Dynamic Programming
- Greedy Algorithms
- Backtracking

---

## Problem-Solving Approach

For each problem:

1. Understand the problem
2. Identify the pattern
3. Develop a brute-force approach
4. Analyze time and space complexity
5. Optimize
6. Implement independently
7. Test edge cases
8. Review and commit

The focus is on demonstrated understanding and independent problem-solving rather than simply increasing the number of problems solved.

---

## Tools

- C++
- VS Code
- Git & GitHub
- LeetCode
- HackerRank

---

## Goal

Build the ability to solve problems independently, understand why solutions work, recognize reusable patterns, and perform effectively in technical interviews.

---

⭐ **Consistency over intensity. Deep understanding matters more than the number of problems solved.**