//https://codeforces.com/contest/2124/problem/B
//min(a1)+ min(a1,a2)+ ....... minimize this --- logic -- minimize as early as possible -- so a1 and a2 is enough


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
	
    ll ans = min(v[0],v[1])+v[0];
	cout<<ans<<endl;
	
	
	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
