# Problem
Given an input string and a dictionary of words, find out if the input string can be segmented into a space-separated sequence of dictionary words.

For example:

```
s = "wordbreakproblem"
d = [word, break, b, r, e, a, k, br, bre, brea, ak, problem]

=> YES
The string can be segmented as:
word b r e a k problem
word b r e ak problem
word br e a k problem
word br e ak problem
word bre a k problem
word bre ak problem
word brea k problem
word break problem
```

## Sample
### Input
```
s = "wordsbreakproblem"
d = [word, break, b, r, e, a, k, br, bre, brea, ak, problem]
```
### Output
```
NO
```
