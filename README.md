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
- Existence vs counting recursion
- Early termination
- Independent implementation
- Testing and debugging
- Time and auxiliary space analysis
- Retention of previously learned patterns

---

## Recent Progress

### September 22, 2026

- Completed the Combination Sum II retention check without reopening the previous implementation.
- Recalled the recursive state: `start`, `target`, and `current`, with the answers container storing results.
- Reinforced why the recursive transition moves to `j + 1` after choosing an element because candidates cannot be reused.
- Reinforced why sorting is required for same-level duplicate detection and safe target pruning.
- Recalled same-level duplicate handling using `j > start && candidates[j] == candidates[j - 1]`.
- Reinforced the distinction between preventing duplicate choices at the same recursion level and allowing valid repeated values across deeper recursion levels.
- Corrected the complexity understanding for Combination Sum II from polynomial reasoning to exponential recursive search, with output size also contributing to total work.
- Identified that Subset Sums would largely repeat previously demonstrated take/skip and subsequence recursion patterns, so it was not treated as a separate new concept.
- Progressed instead to Permutations as a genuinely new backtracking pattern.
- Learned how permutation generation differs from subsequence/combination recursion because every position can choose from the remaining unused elements.
- Implemented `03_Recursion/permutations.cpp` independently using a `current` vector and `used` vector.
- Reinforced the `choose → explore → undo` pattern through `push_back()` / recursive call / `pop_back()` and `used[i] = true` / recursive call / `used[i] = false`.
- Tested permutation generation with `[1,2,3]` and verified all six permutations.
- Corrected the complexity analysis for permutation generation to O(N × N!) time with O(N) auxiliary space, excluding the output storage.
- Completed a retention explanation of the permutation state, base case, used tracking, backtracking, and decreasing choice space.
- Progressed to Reverse Linked List — LeetCode #206.
- Derived the iterative three-pointer reversal approach using `prev`, `current`, and `next`.
- Reinforced why `current->next` must be saved before reversing the current link.
- Explained why `prev` becomes the new head after all nodes have been processed.
- Independently implemented the iterative solution for LeetCode #206.
- Fixed implementation issues involving the LeetCode `ListNode` type and function/class closing braces.
- Submitted the solution successfully with all 28 test cases passing.
- Added `0206_reverse_linked_list.cpp` to the `LeetCode` directory.
- Reinforced that the iterative reversal runs in O(N) time and uses O(1) auxiliary space.

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