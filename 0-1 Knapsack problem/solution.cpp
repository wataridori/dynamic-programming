// 0-1 Knapsack problem - DP
#include<iostream>
using namespace std;

void knapsack01(int *weight, int *value, int n, int max_weight) {
    int **dp = new int *[n + 1];
    // initial an array of size max_weight+1
    for (int i = 0; i < n + 1; i++)
        dp[i] = new int[max_weight + 1];
    
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < max_weight + 1; j++) {
            // base case
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            // leave the current weight if greater
            else if (weight[i-1] > j)
                dp[i][j] = dp[i-1][j];
            // take max value of including or excluding the current weight
            else
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight[i-1]] + value[i-1]);
        }
    }
    cout<<dp[n][max_weight];
}

int main() {
    int n;
    // user input no. of elements
    cin>>n;
    int *weight = new int[n];
    int *value = new int[n];
    // user input weights
    for (int i = 0; i < n; i++) {
        cin>>weight[i];
    }
    // user input values
    for (int i = 0; i < n; i++) {
        cin>>value[i];
    }
    int max_weight;
    // user input maximum weight
    cin>>max_weight;
    // function call
    knapsack01(weight, value, n, max_weight);
    return 0;
}