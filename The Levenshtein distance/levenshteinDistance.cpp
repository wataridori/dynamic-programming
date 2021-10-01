#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate the edit aka levenshtein distance
// src is the source string
// dst is the destination string
int leven(string src, string dst)
{
    int n = src.length();
    int m = dst.length();

    // Creating a dynamic programming table for storing value of subproblems
    // table[i][j] = levenshtien distance for the strings src[i...n-1] and dst[j...m-1] 
    // i = n and j = m refer to special case of end of string 

    int table[n+1][m+1];
    int i, j;

    // Base case declaration
    // For every i, table[i][m] (end of dst) = n-i (Hence counting for adding characters to src)
    for(i = 0; i < n+1; i++) table[i][m] = n - i;

    // For every j, table[n][j] (end of src) = m-j (Hence contributing for deleting characters from src)
    for(j = 0; j < m+1; j++) table[n][j] = m - j;

    // Start from i = n-1 and j = m-1 and continue till (0,0)
    for(i = n - 1; i >= 0; i--)
    {
        for(j = m - 1; j >= 0; j--)
        {
            // If characters are equal, move i and j iterators both by one
            // Or table[i][j] = table[i+1][j+1] (no operation required)
            if(src[i] == dst[j]) table[i][j] = table[i+1][j+1];

            // Else find the min operation result among the following operations:
            // table[i+1][j] (meaning deletion of src[i])
            // table[i][j+1] (meaning addition to src[i])
            // table[i+1][j+1] (meaning substitution of src[i])
            // Add 1 to each (for cost of operation) and take min of them
            else{
                table[i][j] = min(table[i+1][j] + 1, min(table[i][j+1] + 1, table[i+1][j+1]+1));
            }
        }
    }

    // Table[0][0] now contains the answer
    return table[0][0];

}

int main()
{
    string src, dst;
    // Input src and dst strings
    cin >> src >> dst;

    // Output the result
    cout << leven(src, dst) << endl;
    return 0;
}