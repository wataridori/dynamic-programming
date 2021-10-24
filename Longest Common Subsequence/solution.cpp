#include<bits/stdc++.h>
using namespace std;
// vector to save common subsequences with longest length
vector<string> ans;

// dp for memoization
// dp[i][j] saves longest common subsequence length in
// s1[i] s1[i+1] ......... s1[end]  ---> subtring of s1 from ith index to end
// s2[j] s2[j+1] ................ s2[end] ---> subtring of s1 from ith index to end
vector<vector<int> > dp;

// save length of longest subsequence
int len;

// function to claculate length of longest subsequence
int LCS( int idx1, int idx2, string& s1, string& s2 )
{
    /*
    Base Case:
    If one of the string ends, then longest common subsequence is 0
    */
    if( idx1==s1.size() || idx2==s2.size() ) return 0;
    
    // using memoization
    if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];

    // if same charcters then use them in subsequence and search 
    // for longest in remaining part of both strings
    if(s1[idx1]==s2[idx2]){
        return dp[idx1][idx2] = 1+LCS( idx1+1, idx2+1, s1, s2);
    }
    else{
    // if different characters then
    // search for longest subsequence in 
    // s1(idx1+1 to end) and s2(idx2 to end) 
    // OR s1(idx1 to end) and s2(idx2+1 to end)

        int t1 = LCS(idx1+1, idx2, s1, s2);
        int t2 = LCS(idx1, idx2+1, s1, s2);
        return dp[idx1][idx2] = max( t1, t2 );
    }
    return 0;
}

// saving all subsequence with longest length in any order
void saveAll( int idx1, int idx2, string& s1, string& s2, string s )
{
    // one of the string ends 
    // so save the subsequence if it is of longest length
    if( idx1==s1.size() || idx2==s2.size() ){
        if(s.size() == len )
            ans.push_back(s);
        return;
    }

    // checking if we can make longest subsequence from remaining strings part
    if(s.size() + dp[idx1][idx2] != len) return;

    if(s1[idx1]==s2[idx2]){
        s+=s1[idx1];
        saveAll( idx1+1, idx2+1, s1, s2, s);
    }
    else{
        saveAll(idx1+1, idx2, s1, s2, s);
        saveAll(idx1, idx2+1, s1, s2, s);
    }
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    dp.resize(n, vector<int> (m,-1));

    string str="";
    len = LCS(0,0,s1,s2);
    saveAll(0, 0, s1, s2, str);
    int flag=0;

    // sorting longest subsequences if you want them in lexicographical order
    // otherwise comment the below line
    // complexity: O(m*n*log(n))
    sort(ans.begin(), ans.end());

    // printing all subsequences with longest length
    for(int i=0;i<ans.size();++i)
    {
        if(flag)cout<<", ";
        else flag=1;
        cout<<ans[i];
    }
    return 0;

}