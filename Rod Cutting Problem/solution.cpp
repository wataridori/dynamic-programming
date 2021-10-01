/*
    Problem: Rod cutting for maximum value.
    Language: C++
    Type: Dynamic Programming
    Time Complexity: O(n^2)
    Space Complexity: O(n)
*/
#include<iostream>
using namespace std;

int main() {
    int n; // Length of the rod.
    cin >> n;

    int length[n]; // Store the length's of which we can make cut.
    for (int i = 0; i < n; ++i) {
        cin >> length[i];
    }

    int price[n]; // price[i] = value can be gained after cutting the rod of length[i].
    for (int i = 0; i < n; ++i) {
        cin >> price[i];
    }

    int dp[n + 1]; // dp[len] = maximum value achievable for the rod of length len
    dp[0] = 0; // for rod of length 0, profit will be 0

    for (int len = 1; len <= n; ++len) {
        dp[len] = 0; // Initilalize the value for current length as 0

        // Iterate over length array and try to make a cut of
        // length(i) only if the current length of rod is
        // greater than or equal to length(i).
        //
        // So dp(len) = max {  price(i) + dp(len - length(i))   if len >= length(i)
        //                     0 otherwise
        //                  }  for all i = 1 to n
        for (int i = 0; i < n; ++i) {
            if (len - length[i] >= 0) {
                dp[len] = max(dp[len], price[i] + dp[len - length[i]]);
            }
        }
    }

    // print the maximum value for the rod of length n.
    cout << dp[n] << endl;

    return 0;
}