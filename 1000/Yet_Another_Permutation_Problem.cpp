//https://codeforces.com/contest/1858/problem/C


// put all the multiples together, ie twice values together



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


#define ipset(x) for(int i=0;i<n;i++){ll p=0;cin>>x;x.insert(p);}





void solve()

{

	ll n;	cin>>n;
	map<ll,bool>vis;
	
	for(int i=1;i<=n;i++)
	{
	    if(vis[i]==0)
	    {
	        cout<<i<<" ";
	        ll x= i*2;
	        while(x<=n && !vis.count(x))
	        {
	            cout<<x<<" ";
	            vis[x]=1;
	            x*=2;
	        }
	        vis[i]=1;
	    }
	}
// 	cout<<1;
	cout<<endl;

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
