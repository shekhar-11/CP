//https://codeforces.com/contest/2060/problem/B


//after sorting , the diff between each column will be row size(it forms ap)











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
    
	ll r,c;	cin>>r>>c;
	vector<vector<ll>>v(r,vector<ll>(c,0));


	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
	        {
	        cin>>v[i][j];
	       
	            
	        }
	        
	    sort(v[i].begin(),v[i].end());
	}
	
	

	
	
// 	sort(v.begin(),v.end());
	for(int i=0;i<r;i++)
	{
	    for(int j=1;j<c;j++)
	    {
	        if(v[i][j-1]+r!=v[i][j])
	        {
	            cout<<-1<<endl;
	            return ;
	        }
	    }
	}

// 	sort(vis.begin(),vis.end());
	vector<pair<ll,ll>>vis(r,{0,0});
	for(int i=0;i<r;i++)
	{
	    vis[i].first = v[i][0];
	    vis[i].second = i+1;
	}
	sort(vis.begin(),vis.end());
	for(int i=0;i<r;i++)
	{
	    cout<<vis[i].second<<" ";
	}
	cout<<endl;

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
