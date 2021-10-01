# Problem
The longest increasing subsequence problem is to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.

For example, the following sequence
```
0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15
```
has a longest increasing subsequence as:
```
0, 2, 6, 9, 11, 15
```
This subsequence has length six; the input sequence has no seven-member increasing subsequences. The longest increasing subsequence in this example is not the only solution.
For instance,
```
0, 4, 6, 9, 11, 15
0, 2, 6, 9, 13, 15
0, 4, 6, 9, 13, 15
```
are other increasing subsequences of equal length in the same input sequence.

However, the length of the longest increasing subsequence of `0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15` is **6**

## Sample
### Input
```
0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15
```
### Output
```
6
```