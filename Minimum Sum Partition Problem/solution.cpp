#include <bits/stdc++.h>
using namespace std;

class Solution{
    int dp[10001][101];
    int fun(int arr[], int currSum, int i, int sum, int n){
        if(i==n)return abs((sum-currSum)-currSum);
        if(dp[currSum][i]!=-1)return dp[currSum][i];
        return dp[currSum][i]=min(fun(arr, currSum+arr[i], i+1, sum, n), fun(arr, currSum, i+1, sum, n));
    }
  public:
	int minDifference(int arr[], int n)  { 
	    memset(dp,-1,sizeof(dp));
	    int sum=0;
	    for(int i=0;i<n;i++)sum+=arr[i];
	    return fun(arr, 0, 0, sum, n);
	}  
};

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    Solution ob;
    cout << ob.minDifference(a, n) << "\n";
    return 0;
} 