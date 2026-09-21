# Data Structures & Algorithms Journey

This repository documents my DSA learning through structured problem solving, independent implementation, and interview-oriented practice.

The goal is to develop strong algorithmic thinking, recognize reusable patterns, and solve problems independently.

---

## Repository Structure

DSA

├── 01_Arrays

├── 02_Linked_List

├── 03_Recursion

├── HackerRank

├── LeetCode

├── README.md

└── .gitignore

---

## Progress

### Arrays & Common Patterns

- Time & Space Complexity
- Array Fundamentals
- Searching
- Two Pointers
- Sliding Window
- Hashing & Frequency Counting
- Prefix Sum
- Prefix Sum + Hash Map
- Range Sum Queries
- Subarray Sum Patterns
- Common Array Manipulation Patterns
- Pattern Recognition & Approach Selection
- Second Largest Element
- Remove Duplicates from Sorted Array
- Longest Substring Without Repeating Characters

### Binary Search

- Standard Binary Search
- Search Insert Position — LeetCode #35
- First and Last Position — LeetCode #34
- Search in Rotated Sorted Array — LeetCode #33
- First Occurrence using Binary Search
- Last Occurrence using Binary Search
- Boundary Reasoning
- Search-space Reduction
- Sorted-half Identification
- O(log N) Time and O(1) Auxiliary Space

### Linked Lists

- Linked List Fundamentals and Use Cases
- Node Structure and Pointers
- Singly Linked Lists
- Traversal
- Insertion at Beginning, Middle, and End
- Deletion at Beginning, Middle, and End
- Arrays vs Linked Lists
- Basic Singly Linked List Implementation
- Node Deletion
- Linked List Reversal
- Three-Pointer Reversal Technique
- Node Searching
- Finding the Middle using Slow and Fast Pointers
- Counting Nodes
- Cycle Detection using `unordered_set`
- Floyd's Cycle Detection using Slow and Fast Pointers
- Linked List Cycle — LeetCode #141

### Recursion

- Recursive Function Fundamentals
- Base Case and Recursive Case
- Recursive Call Flow
- Stack Unwinding
- Descending Recursion
- Ascending Recursion
- Backtracking through Recursive Calls
- Printing 1 to N using Backtracking
- Printing N to 1 using Recursion
- Sum of First N Numbers
- Counting Digits
- Reversing a String
- Reversing an Array
- Palindrome Checking
- Sum of Array Elements
- Index-based Recursive Problem Solving
- Take/Skip Recursion
- Generating Subsequences
- Subsequences with Sum K
- Checking Whether a Subsequence with Sum K Exists
- Counting Subsequences with Sum K
- Backtracking with `push_back()` / `pop_back()`
- Existence vs Counting Recursion Patterns
- Early Termination in Recursive Search
- Combination-style Recursion
- Combination Sum
- Candidate Reuse in Recursive Search
- Combination Sum II
- No-Reuse Recursive Search
- Same-Level Duplicate Handling
- Sorting for Duplicate Skipping
- Recursive Search with Loop-based Choices

---

## Current Focus

**Recursion & Backtracking**

Currently strengthening:

- Recursive problem decomposition
- Base-case reasoning
- Recursive call flow and stack unwinding
- Index-based recursion
- Take/skip recursion
- Combination-style recursion
- Backtracking
- Candidate reuse vs no reuse
- Same-level duplicate handling
- Sorting for duplicate skipping
- Loop-based recursive choices
- Existence vs counting recursion
- Early termination
- Independent implementation
- Testing and debugging
- Time and auxiliary space analysis

---

## Recent Progress

### September 21, 2026

- Completed the deferred Combination Sum retention check without reopening the previous implementation.
- Reviewed recursive state, reusable take branches, skip branches, successful and unsuccessful base cases, backtracking, and branching complexity.
- Manually traced the Combination Sum recursion and reinforced the `choose → explore → undo` pattern.
- Progressed to Combination Sum II as the next recursion/backtracking concept.
- Identified the key difference from Combination Sum: candidates can no longer be reused, so the recursive transition moves to `j + 1`.
- Learned why candidates must be sorted to enable same-level duplicate detection and target pruning.
- Implemented `03_Recursion/combination_sum_ii.cpp` independently using loop-based recursive choices.
- Implemented same-level duplicate skipping using `j > start && candidates[j] == candidates[j - 1]`.
- Implemented target pruning using sorted candidates.
- Used `push_back()` / recursive call / `pop_back()` for backtracking.
- Tested Combination Sum II with multiple inputs and verified that duplicate combinations are not produced.
- Completed the deferred older-topic retention problem by independently recognizing and implementing First Occurrence Binary Search.
- Tested the Binary Search implementation with duplicate values and correctly returned the first occurrence.
- Corrected and reinforced Binary Search complexity as O(log N) time and O(1) auxiliary space.
- Reviewed the differences between Combination Sum I and Combination Sum II, including candidate reuse, forward movement, and duplicate handling.
- Completed the final understanding check for the new recursion/backtracking pattern.
- Updated the README with the current progression.

---

## Problem-Solving Approach

1. Understand the problem
2. Identify the pattern
3. Develop the approach
4. Attempt independently
5. Implement
6. Test and debug
7. Analyze time and space complexity
8. Review edge cases
9. Commit the work

The focus is on demonstrated understanding, independent implementation, and retention rather than simply increasing the number of problems solved.

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

The objective is to understand why solutions work, recognize reusable patterns, implement them independently, and apply them to unfamiliar problems.