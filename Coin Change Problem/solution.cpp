// Coin Change Problem - DP
#include<bits/stdc++.h>
using namespace std;

void coincount(vector<int>& S, int n) 
{ 
    int i,j;
    int length = S.size();
    // initial vector of size n+1 to 0
    vector<int> dp(n+1,0);
    // base case
    dp[0] = 1;
    // fill up the dp table
    for(i = 0; i < length; i++)
    {
        // Take each coin and update the dp vector accordingly
        for(j = S[i]; j <= n; j++)
        {
            dp[j] += dp[j-S[i]];
        }
    }
    cout<<dp[n];
}

int main()
{
    // for given test case in the problem
    // given denominations
    vector<int> S = {2, 3, 5, 6};
    // desired change
    int n = 10;
    // function call
    coincount(S,n);
    return 0;
}