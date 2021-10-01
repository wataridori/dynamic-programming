# Problem
Given a rod of length `n` and an array of prices that includes prices of all pieces of size `i` with `1 <= i <= n`. Determine the maximum value obtainable by cutting up the rod and selling the pieces.

For example, with the rod of length **8**, and the price as below:
```
length   | 1   2   3   4   5   6   7   8
--------------------------------------------
price    | 1   5   8   9  10  17  18  20
```
then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6)

## Sample
### Input
```
length[] = [1, 2, 3, 4, 5, 6, 7, 8]
price[] = [3, 5, 8, 9, 10, 17, 18, 20]
```
### Output
```
24
// By cutting in eight pieces of length 1
```