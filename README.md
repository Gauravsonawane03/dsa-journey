# Data Structures & Algorithms Journey

This repository documents my DSA learning through structured problem solving, independent implementation, and interview-oriented practice.

The goal is to develop strong algorithmic thinking, recognize reusable patterns, and solve problems independently.

---

## Repository Structure

DSA

├── 01_Arrays
├── 02_Linked_List
├── 03_Recursion
├── 04_DP
├── HackerRank
├── LeetCode
├── README.md
└── .gitignore

---

## Current Focus

**Dynamic Programming, Pattern Recognition & Retention**

Currently strengthening:

- Recursive problem decomposition
- Base-case reasoning
- Take/skip recursion
- Backtracking and undo
- Path/state tracking
- Memoization
- Tabulation
- DP state definition
- Recurrence derivation
- Repeated-subproblem recognition
- Pattern recognition
- Independent implementation
- Mixed/unannounced problem solving
- Older-pattern retention
- Testing and debugging
- Time and auxiliary-space analysis

---

## Today's Progress — October 3, 2026

### Dynamic Programming — LeetCode #62

- Solved **Unique Paths** as a fresh DP problem.
- Learned the **2D/Grid DP** pattern.
- Defined `dp[i][j]` as the number of unique paths to reach cell `(i, j)`.
- Derived:
  `dp[i][j] = dp[i-1][j] + dp[i][j-1]`
- Identified the first row and first column as base cases with one possible path.
- Implemented the solution using a 2D DP table.
- Debugged incorrect `vector<vector<int>>` initialization.
- Added the solution to `LeetCode/0062_unique_paths.cpp`.
- Complexity: `O(m × n)` time and `O(m × n)` auxiliary space.
- Current capability: **APPLIED** with guided derivation and debugging.

### LeetCode #300 — Longest Increasing Subsequence

- Solved **Longest Increasing Subsequence** as an unannounced Medium problem.
- Clarified the difference between a subsequence and a subarray.
- Recognized the DP formulation through state reasoning.
- Defined `dp[i]` as the length of the longest increasing subsequence ending at index `i`.
- Initialized every state to `1` because every individual element forms a subsequence of length `1`.
- Derived:
  `if nums[j] < nums[i], dp[i] = max(dp[i], dp[j] + 1)`
- Used earlier indices `j < i` to extend increasing subsequences.
- Returned the maximum value across all DP states.
- Implemented the `O(N²)` DP solution from blank.
- Debugged DP-vector initialization and loop boundaries.
- Added the solution to `LeetCode/0300_longest_increasing_subsequence.cpp`.
- Complexity: `O(N²)` time and `O(N)` auxiliary space.
- Current capability: **APPLIED** with guided derivation and debugging.

### LeetCode #525 — Contiguous Array

- Solved **Contiguous Array** as an older-topic retention problem.
- Recognized the previously learned **prefix sum + hashmap** pattern without being given the pattern.
- Converted `0 → -1` and `1 → +1` to represent the balance between zeros and ones.
- Used `balance → first index` in an `unordered_map`.
- Initialized `seen[0] = -1` to handle subarrays beginning at index `0`.
- Recognized that a repeated balance means the elements between the two indices have equal numbers of `0`s and `1`s.
- Preserved the earliest occurrence of each balance to maximize subarray length.
- Avoided modifying the input array and updated the balance directly.
- Tested the solution successfully.
- Added the solution to `LeetCode/0525_contiguous_array.cpp`.
- Complexity: `O(N)` average time and `O(N)` space.
- Current capability: **APPLIED**, with hint-assisted recognition.

---

## Previous Progress — October 2, 2026

### Dynamic Programming — LeetCode #746

- Solved **Min Cost Climbing Stairs** as a fresh DP problem.
- Initially confused the state with a counting problem; corrected it through reasoning.
- Defined `dp[i]` as the minimum cost required to reach step `i`.
- Derived the two choices: reach from `i-1` or `i-2`.
- Derived:
  `dp[i] = min(dp[i-1] + cost[i], dp[i-2] + cost[i])`
- Identified the final transition as `min(dp[n-1], dp[n-2])` because the top itself has no cost.
- Implemented using tabulation.
- Debugged a missing `n` declaration and an incorrect `dp[n]` index inside the loop.
- Tested successfully.
- Complexity: `O(N)` time and `O(N)` auxiliary space.
- Current capability: **APPLIED** with targeted guidance and debugging.

### Mixed / Unannounced Pattern Practice

- Practiced binary search without being given the pattern.
- Correctly recognized the sorted-array binary-search structure and stated the boundary updates and `O(log N)` / `O(1)` complexity.
- Existing `LeetCode/0704_binary_search.cpp` was retained; no duplicate file created.

### Prefix Sum + Hashmap Retention

- Recalled the core idea behind **LeetCode #560 — Subarray Sum Equals K**.
- Recalled that the hashmap stores `prefix sum → frequency`.
- Recalled that `currentPrefix - k` identifies the required previous prefix sum.
- Demonstrated why frequencies are necessary when the same prefix sum occurs multiple times.
- Applied the reasoning to a concrete example.

### Sliding Window Retention

- Tested whether sliding window is valid for exact-sum subarray problems.
- Correctly identified that standard exact-sum sliding window relies on **non-negative values**, not sortedness.
- Practiced maintaining `left`, `right`, and `sum`.
- Expanded while the sum was below the target and shrank while it was above the target.
- Identified valid windows during the process.
- Current capability: **APPLIED with guidance**.

### LeetCode #1 — Two Sum

- Attempted an unannounced pattern-recognition problem.
- Initially selected two pointers, then identified why the approach is not valid for an unsorted array.
- Derived the hashmap approach:
  `needed = target - nums[i]`
- Recalled that the hashmap stores `value → index`.
- Correctly identified the importance of checking the hashmap before inserting the current value.
- Revisited the existing:
  `LeetCode/0001_two_sum.cpp`
- Also identified an older practice implementation:
  `01_Arrays/practice/two_sum_hashing.cpp`
- No duplicate file created.
- Complexity: `O(N)` average time and `O(N)` space.
- Current capability: **HINT-ASSISTED → APPLIED**.

---

## Previous Progress — October 1, 2026

### Dynamic Programming — Restart & Retention

- Restarted Dynamic Programming from first principles after a short break.
- Revisited overlapping subproblems and storing computed results.
- Revisited the distinction between a DP state and the value stored in that state.
- Revisited memoization as top-down recursion with stored results.
- Learned tabulation as a bottom-up DP approach.
- Connected DP recurrence design to the choices available at each state.

### LeetCode #70 — Climbing Stairs

- Revisited the recurrence for 1-step and 2-step movement.
- Identified `dp[n]` as the number of distinct ways to reach step `n`.
- Revisited memoization and repeated-subproblem elimination.
- Existing `03_Recursion/climbing_stairs_memoization.cpp` remains as recall work.

### Dynamic Programming — House Robber

- Solved House Robber as a fresh DP problem.
- Defined the state as the maximum money obtainable from houses `0..i` without robbing adjacent houses.
- Derived the choices to skip or rob the current house.
- Derived:
  `dp[i] = max(dp[i-1], nums[i] + dp[i-2])`
- Implemented recursive memoization from a blank file.
- Tested empty input and multiple normal cases.
- Complexity: `O(N)` time and `O(N)` auxiliary space.
- Capability: **IMPLEMENTED → APPLIED** with guided derivation.

### Dynamic Programming — Climbing Stairs with 1, 2, or 3 Steps

- Defined `dp[i]` as the number of ways to reach step `i`.
- Derived:
  `dp[i] = dp[i-1] + dp[i-2] + dp[i-3]`
- Learned and implemented bottom-up tabulation from a blank file.
- Tested `0`, `1`, `2`, `3`, `4`, and `5`.
- Complexity: `O(N)` time and `O(N)` auxiliary space.
- Added the solution to `04_DP`.

### LeetCode #121 — Best Time to Buy and Sell Stock

- Started with brute-force buy/sell pairs.
- Derived the optimized one-pass minimum-tracking approach.
- Maintained the minimum price seen so far.
- Calculated current profit and updated maximum profit.
- Implemented and tested successfully.
- Complexity: `O(N)` time and `O(1)` auxiliary space.
- Pattern recognition required guidance.
- Capability: **APPLIED**.

### LeetCode #169 — Majority Element

- Started with a frequency-counting approach.
- Derived the cancellation idea behind Boyer–Moore Voting.
- Implemented candidate/count logic.
- Debugged an incorrect candidate-reset case.
- Accepted with all test cases passing.
- Complexity: `O(N)` time and `O(1)` auxiliary space.
- Capability: **APPLIED**, with guided derivation and debugging.

---

## Capability Status

### Dynamic Programming

**Current state: UNDERSTOOD → IMPLEMENTED → APPLIED**

Demonstrated through:

- Climbing Stairs
- House Robber
- 1/2/3-step Climbing Stairs
- Min Cost Climbing Stairs
- Unique Paths
- Longest Increasing Subsequence

Current weakness: **independent retention and recognition of fresh DP problems**.

A new **2D/Grid DP** pattern has now been introduced. Independent recall and implementation of multidimensional DP representations will be developed separately.

### Pattern Recognition

**Current state: APPLIED**

Demonstrated patterns include:

- Recursion / backtracking
- Take/skip recursion
- Binary search
- Prefix sum + frequency map
- Prefix sum + modulo frequency
- Two pointers
- Sliding window
- One-pass minimum tracking
- Boyer–Moore cancellation/voting
- Hashmap-based complement lookup
- 1D DP
- 2D/Grid DP

Pattern recognition is improving, but newer patterns may still require hints before independent implementation.

### Independent Problem Solving

- Several problems have been implemented independently after deriving the approach.
- Mixed and unannounced problems are being used to test transfer rather than relying only on topic-labelled questions.
- Current priority is reducing guidance and increasing independent pattern recognition.
- Capability is being recorded based on demonstrated performance rather than exposure or explanation alone.

---

## Problem-Solving Approach

1. Understand the problem
2. Identify the pattern
3. Develop the brute-force approach
4. Look for optimization
5. Attempt independently
6. Implement
7. Test and debug
8. Analyze time and space complexity
9. Review edge cases
10. Revisit older patterns through unannounced practice
11. Record demonstrated capability
12. Commit the work

The focus is on understanding, independent implementation, pattern recognition, debugging, and retention rather than maximizing problem count.

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

The objective is to understand why solutions work, recognize reusable patterns, implement them independently, debug mistakes, analyze complexity, and apply learned patterns to unfamiliar problems.