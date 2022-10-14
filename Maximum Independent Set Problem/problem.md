# Problem
An Independent Set is a set of nodes in a binary tree, in which there is no edge connecting any two.

The size of the Maximum/Largest Independent Set is the total number of nodes it contains.

Given a Binary Tree, find size of the Maximum/Largest Independent Set in it.

For example, the Maximum Independent Set of the following binary tree is `[1, 4, 5, 7, 8]`, and its size is `5`.

```
      1
     / \
    /   \
   2     3
  /     / \
 /     /   \
4     5     6
           / \
          /   \
         7     8
```

## Input
The node number, followed by its children, from left to right.

If a node is empty, the input is `X`

```
1 2 3 4 X 5 6 X X X X 7 8
```

## Output
```
5
```