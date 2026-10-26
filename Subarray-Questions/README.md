# Subarray Questions — Multi-Platform Sheet

Curated subarray problems across major platforms. Practice by **platform** or by **technique**.

**Techniques:** Kadane · Prefix Sum · Prefix + HashMap · Sliding Window · Two Pointers · Deque

---

## Suggested Order

1. Easy Kadane / fixed-window sum  
2. Sliding window (positive elements)  
3. Prefix sum + hashmap (negatives allowed)  
4. Circular / product / modulo variants  
5. Contest-style (Codeforces / AtCoder / CodeChef)

---

## LeetCode

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | Maximum Subarray | Easy | Kadane | [53](https://leetcode.com/problems/maximum-subarray/) |
| 2 | Maximum Product Subarray | Medium | Kadane variant | [152](https://leetcode.com/problems/maximum-product-subarray/) |
| 3 | Maximum Sum Circular Subarray | Medium | Kadane + circular | [918](https://leetcode.com/problems/maximum-sum-circular-subarray/) |
| 4 | Subarray Sum Equals K | Medium | Prefix + HashMap | [560](https://leetcode.com/problems/subarray-sum-equals-k/) |
| 5 | Continuous Subarray Sum | Medium | Prefix mod K | [523](https://leetcode.com/problems/continuous-subarray-sum/) |
| 6 | Subarray Sums Divisible by K | Medium | Prefix mod K | [974](https://leetcode.com/problems/subarray-sums-divisible-by-k/) |
| 7 | Minimum Size Subarray Sum | Medium | Sliding Window | [209](https://leetcode.com/problems/minimum-size-subarray-sum/) |
| 8 | Subarray Product Less Than K | Medium | Sliding Window | [713](https://leetcode.com/problems/subarray-product-less-than-k/) |
| 9 | Maximum Size Subarray Sum Equals K | Medium | Prefix + HashMap | [325](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/) *(Premium)* |
| 10 | Contiguous Array | Medium | Prefix + HashMap | [525](https://leetcode.com/problems/contiguous-array/) |
| 11 | Number of Subarrays with Odd Sum | Medium | Prefix parity | [1524](https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/) |
| 12 | Count Number of Nice Subarrays | Medium | Sliding / Prefix | [1248](https://leetcode.com/problems/count-number-of-nice-subarrays/) |
| 13 | Shortest Subarray with Sum at Least K | Hard | Deque + Prefix | [862](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/) |
| 14 | Count of Range Sum | Hard | Merge / Prefix | [327](https://leetcode.com/problems/count-of-range-sum/) |
| 15 | Maximum Subarray Sum with One Deletion | Medium | DP / Kadane | [1186](https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/) |

---

## GeeksforGeeks

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | Kadane's Algorithm (Max Subarray Sum) | Medium | Kadane | [GFG](https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1) |
| 2 | Subarray with Given Sum | Easy | Sliding Window | [GFG](https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1) |
| 3 | Longest Subarray with Sum K | Medium | Prefix + HashMap | [GFG](https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1) |
| 4 | Subarray with 0 Sum | Easy | Prefix + HashMap | [GFG](https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1) |
| 5 | Count Subarrays with Sum K | Medium | Prefix + HashMap | [GFG](https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1) |
| 6 | Smallest Subarray with Sum > X | Easy | Sliding Window | [GFG](https://www.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1) |
| 7 | Max Sum of Subarray of Size K | Easy | Fixed Window | [GFG](https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1) |
| 8 | Largest Subarray of 0s and 1s | Medium | Prefix + HashMap | [GFG](https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1) |
| 9 | Maximum Product Subarray | Medium | Kadane variant | [GFG](https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1) |
| 10 | Circular Tour / Max Circular Sum | Medium | Kadane circular | [GFG](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1) |

---

## Codeforces

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | Books | ~1400 | Sliding Window | [279B](https://codeforces.com/problemset/problem/279/B) |
| 2 | Karen and Coffee | ~1400 | Diff Array + Prefix | [816B](https://codeforces.com/problemset/problem/816/B) |
| 3 | Greg and Array | ~1400 | Diff + Prefix | [295A](https://codeforces.com/problemset/problem/295/A) |
| 4 | Little Girl and Maximum Sum | ~1500 | Prefix / Frequency | [276C](https://codeforces.com/problemset/problem/276/C) |
| 5 | Pair of Topics | ~1500 | Two Pointers | [1324D](https://codeforces.com/problemset/problem/1324/D) |
| 6 | More practice | varies | Prefix / Window | [tag: prefix-sums](https://codeforces.com/problemset?tags=prefix-sums) |
| 7 | More practice | varies | Two Pointers | [tag: two-pointers](https://codeforces.com/problemset?tags=two-pointers) |

**Useful CF tags:** `prefix-sums`, `two-pointers`, `data-structures`, `greedy`

---

## AtCoder

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | ABC: Sum of Difference / Prefix Sums | Beginner | Prefix Sum | [ABC076 C](https://atcoder.jp/contests/abc076/tasks/abc076_c) → practice: [ABC087 B](https://atcoder.jp/contests/abc087/tasks/abc087_b) |
| 2 | Typical: Cumulative Sum | Beginner | Prefix Sum | [ABC122 C](https://atcoder.jp/contests/abc122/tasks/abc122_c) |
| 3 | Multiple of 3 / Subarray mod | Beginner–Mid | Prefix mod | [ABC105 D](https://atcoder.jp/contests/abc105/tasks/abc105_d) |
| 4 | Flipping / Max segment | Mid | Kadane-like | Search ABC “max sum” |
| 5 | Educational DP Contest — Knapsack cousins | Mid | DP on ranges | [DP Contest](https://atcoder.jp/contests/dp/tasks) |

**Tip:** Filter AtCoder ABC tasks with keywords: *prefix*, *cumulative*, *subarray*, *segment*.

---

## CodeChef

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | Maximum Subarray | Easy | Kadane | [MAXSC](https://www.codechef.com/problems/MAXSC) *(related)* / search Kadane |
| 2 | Subarray Permutation / Sum themes | Easy–Med | Prefix | [Practice → Arrays](https://www.codechef.com/practice) |
| 3 | Chef and Subarray | Easy | Sliding / Count | [CHEFARRP](https://www.codechef.com/problems/CHEFARRP) |
| 4 | Maximise Subarray Sum (variants) | Med | Kadane | Search: `MAXSUBSUM` / `SUBINC` |
| 5 | Subarray XOR / Prefix XOR | Med | Prefix XOR | Practice filter: Arrays + Prefix |

---

## HackerRank

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | Maximum Subarray | Easy | Kadane + max subsequence | [maxsubarray](https://www.hackerrank.com/challenges/maxsubarray/problem) |
| 2 | Maximum Subarray Sum (mod m) | Hard | Prefix + Ordered Set | [maximum-subarray-sum](https://www.hackerrank.com/challenges/maximum-subarray-sum/problem) |
| 3 | Subarray Division (birthday) | Easy | Fixed Window | [the-birthday-bar](https://www.hackerrank.com/challenges/the-birthday-bar/problem) |
| 4 | Sparse Arrays (not subarray — skip) | — | — | — |
| 5 | Subarray with Given Sum | Easy–Med | Prefix + HashMap | [subarray-with-given-sum-8](https://www.hackerrank.com/challenges/subarray-with-given-sum-8/problem) |

---

## InterviewBit

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | Max Sum Contiguous Subarray | Easy | Kadane | [max-sum-contiguous-subarray](https://www.interviewbit.com/problems/max-sum-contiguous-subarray/) |
| 2 | Subarray with Given Sum | Easy | Sliding Window | [subarray-with-given-sum](https://www.interviewbit.com/problems/subarray-with-given-sum/) |
| 3 | Counting Subarrays | Medium | Two Pointers | [counting-subarrays](https://www.interviewbit.com/problems/counting-subarrays/) |
| 4 | Max Non Negative SubArray | Easy | Sliding / Kadane | [max-non-negative-subarray](https://www.interviewbit.com/problems/max-non-negative-subarray/) |
| 5 | Add One To Number *(array, not subarray)* | — | — | skip for this sheet |

---

## CSES (Problem Set)

| # | Problem | Diff | Technique | Link |
|---|---------|------|-----------|------|
| 1 | Maximum Subarray Sum | Easy | Kadane | [CSES](https://cses.fi/problemset/task/1643) |
| 2 | Maximum Subarray Sum II | Hard | Sliding + Deque | [CSES](https://cses.fi/problemset/task/1644) |
| 3 | Subarray Sums I | Easy | Sliding / Two Pointers | [CSES](https://cses.fi/problemset/task/1660) |
| 4 | Subarray Sums II | Medium | Prefix + HashMap | [CSES](https://cses.fi/problemset/task/1661) |
| 5 | Subarray Divisibility | Medium | Prefix mod | [CSES](https://cses.fi/problemset/task/1662) |
| 6 | Subarray Distinct Values | Medium | Sliding Window | [CSES](https://cses.fi/problemset/task/2428) |

---

## By Technique (cross-platform)

### Kadane
- LC 53, LC 918, LC 152  
- GFG Kadane, GFG Max Circular  
- CSES Maximum Subarray Sum  
- HR Maximum Subarray  
- IB Max Sum Contiguous Subarray  

### Prefix Sum + HashMap
- LC 560, LC 525, LC 974  
- GFG Longest Subarray Sum K, Subarray 0 Sum  
- CSES Subarray Sums II, Subarray Divisibility  
- HR Subarray with Given Sum  

### Sliding Window / Two Pointers
- LC 209, LC 713  
- GFG Subarray with Given Sum, Max Sum Size K  
- CF 279B Books  
- CSES Subarray Sums I, Subarray Distinct Values  
- IB Counting Subarrays  

### Advanced (Deque / Ordered Set)
- LC 862 Shortest Subarray Sum ≥ K  
- CSES Maximum Subarray Sum II  
- HR Maximum Subarray Sum (mod m)  

---

## 2-Week Practice Plan

| Day | Focus | Solve |
|-----|-------|-------|
| 1 | Kadane basics | LC 53, GFG Kadane, CSES 1643 |
| 2 | Circular + product | LC 918, LC 152, GFG Max Circular |
| 3 | Fixed window | GFG Max Sum Size K, HR Birthday Bar |
| 4 | Variable window | LC 209, GFG Subarray Given Sum, CF 279B |
| 5 | Prefix + map | LC 560, GFG Subarray 0 Sum, CSES 1661 |
| 6 | Mod / divisibility | LC 974, LC 523, CSES 1662 |
| 7 | Mixed review | IB sheet (3 problems) + 1 HR |
| 8–10 | Contest style | 5 CF prefix/two-pointer + 3 AtCoder ABC |
| 11–12 | Hard | LC 862, CSES 1644, HR max subarray mod |
| 13–14 | Timed mocks | Pick 4–5 random from any platform |

---

## How to use this folder

1. Pick a platform section above.  
2. Solve on that site (don’t only read solutions).  
3. Optionally drop your C++ attempt here as `LC_53.cpp`, `GFG_Kadane.cpp`, etc.  
4. Track progress by checking off rows in this file.

Happy grinding.
