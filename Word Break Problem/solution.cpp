// Word Break problem - dp
// Question Link: https://leetcode.com/problems/word-break/

#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string wordBreak(string &s, vector<string>& wordDict) 
    {
        
        set<string> st; // set of all words from the dictionary
        for(auto &word:wordDict) 
        {
            st.insert(word);
        }
        
        int n = s.size(); // string length
        
        bool dp[n][n];
        memset(dp, false, sizeof(dp));
        
        // checking for all suffixes of string s (base case)
        for(int start=0;start<n;start++)
        {
            // s[start:n-1] exists in the dictionary
            if(st.find(s.substr(start)) != st.end() )
            {
                dp[start][n-1] = true;
            }
        }
        
        for(int start=n-1;start>=0;start--)
        {
            for(int curr=n-2;curr>=start;curr--)
            {
                // Prunning: uncomment the following line if max length for dictionary words is known.
                // if (curr - start + 1 > 20) continue;
                
                // check if s[start:curr] is possible
                // dp[start][curr] = dp[curr+1][curr+1] || dp[start][cur+1]
                if(st.find(s.substr(start,curr-start+1))  != st.end())
                {
                    // s[start:curr] is possible check further
                    if(dp[curr+1][curr+1])
                    {
                        dp[start][curr] = true;
                    }
                }
                if(dp[start][curr+1])
                {
                    dp[start][curr] = true;
                }
            }

        }
        
        //dp[0][0] represents whethere the whole string s can be made up from dictionary words
        return (dp[0][0] ? "YES" : "NO");    
    }
};


int main()
{
    string s; // target string
    cin>>s;
    
    int m; // dictionary size
    cin>>m;

    vector<string> wordDict(m); // dictionary words
    for (int i=0;i<m;i++)
    {
        cin>>wordDict[i];
    }

    Solution* obj;
    cout<<obj->wordBreak(s, wordDict)<<"\n";

    return 0;
}
// Time complexity: O( (N^2)log(M)), N = size of string, M = number of words in the dictionary

// Space complexity: O(M*K + N*N) as we are creating N x N dp array and M*K for the set of dictionary strings