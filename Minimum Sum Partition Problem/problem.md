# Problem
Given a set of positive integers `S`, partition set `S` into two subsets, `S1` and `S2`, such that the difference between the sum of elements in `S1` and `S2` is minimized. The solution returns the minimum absolute difference between the sum of elements of two partitions.

If there is a set `S` with `n` elements, then if we assume `S1` has `m` elements, `S2` must have `n-m` elements and the value of `abs(sum(S1) – sum(S2))` should be minimum.


## Sample
### Input
```
S = [10, 20, 15, 5, 25]
```
### Output
```
5
// S can be partitioned into [10, 20, 5] and [15, 25],
// and the absolute difference between sum of the two subset is 5
```

