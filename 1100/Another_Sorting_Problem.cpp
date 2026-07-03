//https://codeforces.com/problemset/problem/2231/B

//select a subsequence and increase them by k , such that finally it gets in increasing order, +k can be done only once

//what can be done is , find the maximum value that needs to be added so that it gets in increasing order,finally increamenet all the smaller number by that max value ,then check for ascending order
//needed help



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
	ll n;
	cin>>n;
    
    vll v(n,0);
    ip(v);
    ll diff = 0,md=-1;
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            diff = max(v[i-1]-v[i],diff);
            
            
        }
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            v[i]+=diff;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            cout<<"NO\n";
            return;
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
