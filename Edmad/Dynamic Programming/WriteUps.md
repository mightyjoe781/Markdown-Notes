## 2D DP Problems

### LCS (Longest Common Subsequence)



### SCS (Shortest Super Sequence)

*He He easy use this result*

`len(SCS) = (sum of lengths of two strings)-len(LCS)`



## Subset Problems

### Subset Sum

Given a array of numbers and a sum value determine if any subset of array sum up equal to a element

*Problem below calculates this as a part of its solution*.

### Partition Problem

*( Variation of 0-1 Knapsack)*

Determine whether a given set can be partitioned into two subsets such that sum of elements in both subsets is same.

*Example*- `arr[] = {1,5,11,5}` 

Ans- `true` because `{1,5,5}` and `{11}`

*Note:* 2 steps to solve

1. Calculate sum of array. If sum is odd we can't have any subset. (because say sum is odd then for two equal subsets sum both should sum up to fractions :) )
2. Use if even try to find a subset of array with sum equals sum/2

- *Subproblem*

​	$ D_{n} : $ whether there exists a subset for `arr[]` with size `n` with sum equals to `sum/2`

- *Recursion*

​	$ D_{n,s} \ : \ D_{n-1,s} \ || \  D_{n-1,s-arr[n-1]} $

​	either we exclude `nth` element or we consider it selected and search for the remaining sum in `(n-1) th`  elements.

- *Base Cases*

1. If `sum == 0` then return `true` because we can take $\phi$ set
2. If `n== 0` and `sum!=0` then return `false` because we need more elements for required sum but we are out of elements.
3. (*Optimization*) If `arr[n-1] > sum` then return $ D_{n-1,s} $

This approach explained takes $ O (2^n) $ time when used as Recursion.

Even Memoization takes same $ O (2^n) $ time when *(in worst each recursion gives unique sum)*

So use Bottom Up DP.

 `dp[n][subsetsum]` for each element in `arr[]`

`dp[i][j] == true` if sum j can be formed by array elements in subset `arr[0]` ... `arr[n]` otherwise `dp[i][j] == false` 

You can optimize further by using 1D DP Table :)

### Minimum Partition Subset

*(extension of above problem)*(*Connection to Classic Knapsack):[Problem](https://leetcode.com/problems/last-stone-weight-ii/*)

divide the `arr[]` this time into 2 sets $ S_1 \ , S_2 $ such that their absolute difference between their sums is minimum.

$ |S_1| = m $  elements then $ | S_2| = n-m $ elements.

and we have to $ minimize(\  |\ \Sigma_{i= 0}^{i=m-1} s_{1,i} \ - \Sigma_{j= 0}^{i=n-m+1} s_{2,j} |\ )$ 

*Bottom-Up DP Approach Explained* (Assumption sum is small)

1. `dp[n+1][sum +1]` = `1` if some subset from 1st to `i'th` has sum equal to j `0` otherwise

   `i` ranges from `{0...n}`

   `j` ranges from `{0...(sum of all elements)}`

2. Sum `j` can be obtained by two ways including or excluding `i`

3. *(meat of problem)* find min sum difference, we have to find `j` such that `Min{sum - j*2 : dp[n][j] = 1}` 

   where `j` varies from `0` to `sum/2`

   *(Idea) : sum of $S_1$ is `j` and it should be closer to sum/2 while `2j` should be closer to sum*

### Longest Path in a Matrix with given constraints

Given n*n matrix where all numbers are distinct, find the maximum length path (starting from any cell) such that cells along the path are in increasing order with a difference of 1.

At any given `(i,j)` we can move up,down,left,right st. adjacent cells have difference 1. 

(*DAG Topological Solution Exists*)

### Matrix Chain Multiplication

### Longest Common Subsequence

