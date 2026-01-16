//https://codeforces.com/contest/1985/problem/C

//greedy is good -- always the sum <=maxi for this


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
	ll maxi = 0,sum=0,ans=0;
	unordered_map<ll,bool>vis;
	for(int i=0;i<n;i++)
	{
	  
	  if(v[i]>=maxi)
	  {
	      if(sum==v[i])
	      ans++;
	      
	      sum+=v[i];
	  }
	  else
	  {
	      sum-=maxi;
	      sum+=v[i];
	      if(sum==maxi)
	      ans++;
	      sum+=maxi;
	  }
	  maxi=max(maxi,v[i]);
	   
	  
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
