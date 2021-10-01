#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
 

// Function to calculate the length of longest increasing subsequence
// arr is an integer array pointer
// n is length of array arr
int lis(int* arr, int n)
{ 
    int i, maxV = 0, j = 1;

    // Creating a dynamic programming table for storing value of subproblems
    // table[i] = longest increasing subsequence ending with arr[i] 
    int table[n];
    
    // Base case: table[0] = 1 since only 1 integer is concerned (arr[0])
    table[0] = 1;

    // Start from i = 1 continue till end
    for(i = 1; i < n; i++)
    {
        // table[i] will atleast be 1 (only single integer long)
        table[i] = 1;
        
        // Check from 0 till i
        for(j = 0; j < i; j++)
        {
            // Since i > j, we're lokking for integers such that arr[i] > arr[j]
            // If found, assign table[i] = table[j] + 1 (only if table[i] < table[j] + 1)
            // Meaning the new length is greater than the current table[i] length
            if(arr[i] > arr[j]) table[i] = max(table[i], table[j] + 1);
        }
    }
    // Find at which i we got the largest table[i]
    for(i = 0; i < n; i++) 
        if(maxV < table[i]) maxV = table[i];

    // Return this max value
    return maxV;
}

int main()
{
    int n, i;
    // Length of array
    cin >> n;
    int* arr =(int*)malloc(n*sizeof(int));

    // Input of array asssumed to be space (or a newline) separated integers 
    for(i = 0; i < n; i++) cin >> arr[i];

    // Output the result
    cout << lis(arr, n);
    return 0;
}