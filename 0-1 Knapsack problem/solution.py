def knapsack(max_weight, weight, value): 
    n=len(value)
    table = [[0 for x in range(max_weight + 1)] for x in range(n + 1)] 
 
    for i in range(n + 1): 
        for j in range(max_weight + 1): 
            if i == 0 or j == 0: 
                table[i][j] = 0
            elif weight[i-1] <= j: 
                table[i][j] = max(value[i-1] + table[i-1][j-weight[i-1]], table[i-1][j]) 
            else: 
                table[i][j] = table[i-1][j] 
   
    return table[n][max_weight]

value = [20, 5, 10, 40, 15, 25]
weight = [1, 2, 3, 8, 7, 4]
max_weight = 10
 
print(knapsack(max_weight, weight, value))