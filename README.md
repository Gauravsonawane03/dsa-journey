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

- Second Largest Element
  - Single-pass traversal
  - Maintaining largest and second-largest values
  - Handling duplicate largest values
  - Handling absence of a distinct second-largest element

- Two Sum
  - Hash Map
  - Complement lookup
  - Value-to-index mapping
  - O(N) average time
  - O(N) space
  - LeetCode accepted solution

- Remove Duplicates from Sorted Array
  - Two Pointers
  - In-place modification
  - O(N) time
  - O(1) extra space
  - LeetCode accepted solution

- Longest Substring Without Repeating Characters
  - Sliding Window
  - Hashing
  - Pattern transfer from arrays to strings
  - O(N) time
  - O(N) worst-case space
  - LeetCode accepted solution

- Binary Search
  - Sorted array requirement
  - Search space
  - `low`, `high`, and `mid`
  - Search space reduction
  - Boundary movement
  - `low <= high` loop condition
  - O(log N) time
  - O(1) space

- Search Insert Position
  - Binary Search
  - Finding the target index
  - Finding the correct insertion position
  - Using `low` as the insertion position when the target is absent
  - O(log N) time
  - O(1) space
  - LeetCode #35 accepted solution

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
- Binary Search
- Subarray problems
- Independent problem solving
- Choosing the appropriate approach rather than memorizing patterns
- Applying learned patterns to LeetCode problems

---

## Latest Learning Log

### September 3, 2026 — Binary Search + LeetCode Practice

Started Binary Search as a new DSA topic with focus on understanding the algorithm and its search-space invariant rather than memorizing a template.

- Learned why Binary Search requires a sorted/searchable structure
- Understood the search space and the role of `low`, `high`, and `mid`
- Practiced eliminating half of the search space after each comparison
- Understood why `high = mid - 1` is used when searching the left half
- Understood why `low = mid + 1` is used when searching the right half
- Understood why `while (low <= high)` is required to check the final remaining element
- Implemented standard Binary Search in C++
- Tested the implementation with existing and missing targets
- Practiced **Search Insert Position**
- Understood why `low` becomes the insertion position when the target is absent
- Solved **LeetCode #35 — Search Insert Position**
- Submitted successfully with 66/66 test cases passed
- Saved the accepted LeetCode solution in the `LeetCode` folder
- Reviewed O(log N) time and O(1) space complexity

The focus was understanding why each search boundary moves and how the search space shrinks rather than memorizing the Binary Search template.

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