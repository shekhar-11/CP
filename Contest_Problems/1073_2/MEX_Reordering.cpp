//https://codeforces.com/contest/2191/problem/B


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
    sort(v.begin(),v.end());
      map<ll,ll>p,s;
      for(int i=0;i<n;i++)
      s[v[i]]++;
      for(int i=0;i<n;i++)
	{
	   p[v[i]]++;
	   s[v[i]]--;
	   if(s[v[i]]==0)
	   {
	       s.erase(v[i]);
	   }
	   int kp=0,ks=0;
	   for(auto &it:p)
	   {
	       if(kp!=it.first)
	       break;
	       kp++;
	   }
	   for(auto it:s)
	   {
	       if(ks!=it.first)
	       {
	           break;
	       }
	       ks++;
	   }
	   if(kp==ks)
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
