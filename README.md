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
- Reverse Linked List — LeetCode #206

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
- Permutations
- Used-array Backtracking
- Decreasing Choice Space in Permutation Generation
- N-Queens
- Constraint-based Backtracking
- Board-based Backtracking
- Column and Diagonal Safety Checking

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
- Permutation generation
- Used-state tracking
- Constraint-based backtracking
- Board-based backtracking
- Existence vs counting recursion
- Early termination
- Independent implementation
- Testing and debugging
- Time and auxiliary space analysis
- Retention of previously learned patterns

---

## Recent Progress

### September 23, 2026

- Completed Permutations retention by recalling recursive state, `used[]` tracking, backtracking, base case, N! permutations, and O(N × N!) time.
- Progressed to N-Queens as the next genuinely new recursion/backtracking pattern.
- Learned constraint-based backtracking with row-by-row queen placement.
- Implemented `03_Recursion/n_queens.cpp` using column and diagonal safety checks with choose → recurse → undo.
- Tested N-Queens for N = 1, 2, 3, and 4 and verified the expected solutions.
- Applied the pattern to LeetCode #51 — N-Queens and independently implemented the solution.
- Submitted successfully with all 9 test cases passing.
- Added `0051_n_queens.cpp` to the `LeetCode` directory.
- Analyzed the implementation as approximately O(N × N!) time and O(N²) auxiliary space excluding output storage.

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