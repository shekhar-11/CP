//https://codeforces.com/contest/2051/problem/C


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

	ll n,p,q;	cin>>n>>p>>q;
	
	vll v(p,0);
	unordered_map<ll,bool>vis;
	for(auto &it:v)
	{
	    cin>>it;
	   
	}
	for(int i=1;i<=q;i++)
	{
	    int x;
	    cin>>x;
	    vis[x]=true;
	}
	if(vis.size()==n)
	{
	    string ans(p,'1');
	    cout<<ans<<endl;
	    return;
	}
	if(vis.size()<=n-2)
	{
	    string ans(p,'0');
	    cout<<ans<<endl;
	    return;
	    
	}
	string ans(p,'0');
	
	for(int i=1;i<=p;i++)
	{
	    if(!vis[v[i-1]])
	    ans[i-1]='1';
	}
	cout<<ans<<endl;
	

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
