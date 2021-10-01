#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long int meh = 0; // meh is maximum on that index
        long long int msf = INT_MIN; // msf is maximum so far.
        for(int i=0; i<n; i++)
        {
            meh = meh + arr[i];
            if(meh < arr[i])
                meh = arr[i];
            if(msf < meh)
                msf = meh;
        }
        return msf;
    }
};


int main()
{
    int n;
    cin >> n;   
    
    int a[n];   
    for(int i=0;i<n;i++)
        cin >> a[i]; 
        
    Solution ob;
    cout << ob.maxSubarraySum(a, n) << endl;  
}
  