/*

Topic : Recursion or Backtracking
Approach :
--> Generate all the numbers from 0 to low-1 using recursion as per condition given in the question.
--> Generate all the numbers from 0 to high using recursion as per condition given in the question.

--> Now, remove all the numbers generated from 0 to low-1 from the numbers generated from 0 to high.

--> if the set is empty then print -1 else print all the numbers in the set.

	Time complexity : O(2^10)
*/


#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(int i, int flag, string &s, int low, int high, vector<int> &res, int n)
{
    if(i == n)
    {
        int num=stoll(s);
        if(num >= low && num <= high) res.push_back(num);
        return;
    }
 
    if(flag==1)
    {
        for(char ch='0'; ch<='9'; ch++)
        {
            s[i]=ch;
            if(ch=='0') solve(i+1, 1, s, low, high, res, n);
            else solve(i+1, 0, s, low, high, res, n);
        }
        return;
    }
    if(s[i-1] > '0')
    {
        s[i]=(char)(s[i-1]-1);
        solve(i+1, 0, s, low, high, res, n);
    }
    if(s[i-1] < '9')
    {
        s[i]=(char)(s[i-1]+1);
        solve(i+1, 0, s, low, high, res, n);
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int low,high;
    cin>>low>>high;
    
    string s=to_string(high);
    int n=s.length();
    vector<int> res;
    solve(0, 1, s, low, high, res, n);
    
    if(res.empty())
    {
        cout<<"-1\n";
        return 0;
    }
    
    sort(res.begin(), res.end());
    for(auto it: res)
    {
        cout<<it<<' ';
    }
    cout<<'\n';
    
}
