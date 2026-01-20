//https://codeforces.com/contest/1970/problem/A1

//intuitional brute


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

// 	ll n;	cin>>n;

	string s;
	cin>>s;
	map<ll,vector<int>>vis;
	ll o=0,c=0;
	for(int i=0;i<s.size();i++)
	{
	    ll b = o-c;
	    vis[b].push_back(i);
	    if(s[i]=='(')
	    o++;
	    else
	    c++;
	}
	for(auto &it:vis)
	{
	    sort(it.second.rbegin(),it.second.rend());
	    for(auto &x:it.second)
	    {
	        cout<<s[x];
	    }
	}
	
	

}

int main()

{

	int t=1;

// 	cin>>t;

	while(t--)solve();

	return 0;

}
