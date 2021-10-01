# Problem
Given an unlimited supply of coins of given denominations `S = [S1, S2, ... , Sm]`, find the total number of distinct ways to get the desired change `N`.

For example, for `N = 4` and `S = [1,2,3]`, there are four solutions:
- [1,1,1,1]
- [1,1,2]
- [2,2]
- [1,3]

So output should be `4`

For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.


## Sample
### Input
```
N = 10
S = [2, 3, 5, 6]
```
### Output
```
5
// [2,2,2,2,2], [2,2,3,3], [2,2,6], [2,3,5] and [5,5]
```