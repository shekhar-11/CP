//https://codeforces.com/contest/1955/problem/B


//first construct the required matrix then compare



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

	ll n,c,d;	cin>>n>>c>>d;
	
	vector<vector<ll>>v(n,vector<ll>(n,0));
	vector<vector<ll>>mk(n,vector<ll>(n,0));
	map<ll,ll>vis;
	ll mini = 1e9;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cin>>v[i][j];
	        mini = min(mini,v[i][j]);
	    }
	}
	
	mk[0][0] = mini;
	vis[mk[0][0]]++;
	for(int i=1;i<n;i++)
	{
	    
	mk[i][0] = mk[i-1][0]+c;
	mk[0][i] = mk[0][i-1]+d;
	vis[mk[i][0]]++;
	vis[mk[0][i]]++;
	}
	for(int k = 0;k<n-1;k++)
	{
	    mk[k+1][k+1] = mk[k][k]+c+d;
	    vis[mk[k+1][k+1]]++;
	    for(int i = k+2;i<n;i++)
	    {
	        mk[i][k+1] = mk[i-1][k+1]+c;
	        vis[mk[i][k+1]]++;
	    }
	    for(int i = k+2;i<n;i++)
	    {
	        mk[k+1][i] = mk[k+1][i-1]+ d;
	        vis[mk[k+1][i]]++;
	    }
	}
	
	for(int i=0;i<n;i++)
	{
	    for(int j =0;j<n;j++)
	    vis[v[i][j]]--;
	}
	for(auto &it:vis)
	{
	    if(it.second!=0)
	    {
	        cout<<"No\n";
	        return;
	    }
	}
	cout<<"Yes\n";
	


	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
