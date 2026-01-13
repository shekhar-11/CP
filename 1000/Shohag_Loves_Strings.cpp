//https://codeforces.com/contest/2039/problem/B


/*
if 2 same character one after the other then ans
or if 3 character all different ,
else -1

*/






#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#define ll long long

#define vi vector<int>

#define vll vector<ll>

#define umii unordered_map<int,int>

#define mii  map<int,int>

#define umib unordered_map<int,bool>

#define mib  map<int,bool>

#define umll unordered_map<ll,ll>

#define mll  map<ll,ll>

#define ulb unodered_map<ll,bool>

#define umci unordered_map<char,int>

#define umcb unordered_map<char,bool>

#define mci map<char,int>

#define mcb map<char,bool>

#define ip(x) for(auto &it:x)cin>>it

#define op(x) for(auto &it:x) cout<<it<<" "

void solve()

{
    string s;
    cin>>s;
   
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            string ans(2,s[i]);
            
            cout<<ans<<endl;
            return;
        }
    }
    for(int i=2;i<s.size();i++)
    {
        if(s[i]!=s[i-1] && s[i-1]!=s[i-2] && s[i]!=s[i-2])
        {
            string ans(3,'0');
            ans[0]=s[i-2];
            ans[1]=s[i-1];
            ans[2]=s[i];
            cout<<ans<<endl;
            return;
        }
    }
    
    cout<<-1<<endl;
    

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
