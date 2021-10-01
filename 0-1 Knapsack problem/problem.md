# Problem
Given a set of items, each with a **weight** and a **value**, determine the number of each item to include in a collection so that the **total weight is less than or equal to a given limit** and **the total value is as large as possible**.

Please note that the items are **indivisible**. We can either take an item or not (0-1 property).

## Sample
### Input:
```
value = [20, 5, 10, 40, 15, 25]
weight = [1, 2, 3, 8, 7, 4]
int max_weight = 10
```

### Output
```
60
```

### Description
```
value = 20 + 40 = 60
weight = 1 + 8 = 9 < max_weight
```