//https://codeforces.com/contest/2191/problem/A

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

	ll n;	cin>>n;
    vll v(n,0);
    ip(v);
    map<ll,char>vis;
    for(int i=0;i<n;i++)
    {
        if(i%2)
        vis[v[i]] = 'b';
        else
        vis[v[i]]= 'r';
    }
    char pre = '0';
    for(auto &it:vis)
    {
        if(pre=='0')
        {
            pre = it.second;
        }
        else
        {
            if(it.second==pre)
            {
                cout<<"NO\n";
                return;
            }
            pre=it.second;
        }
    }
    cout<<"YES\n";
	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
