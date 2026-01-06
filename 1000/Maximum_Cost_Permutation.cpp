//https://codeforces.com/contest/2144/problem/B

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
	umib vis;
	
	int largest = n;
	for(auto &it:v)
	vis[it] = true;
	
	while(vis[largest] && largest)
	largest--;
	
	for(int i=0;i<n;i++)
	{
	    if(v[i]==0)
	    {
	        v[i] = largest;
	        vis[largest] = 1;
	    while(vis[largest] && largest)
	    largest--;
	    }
	}
	ll maxi = -1,mini=1e9;
	for(ll i=0;i<n;i++)
	{
	    if(v[i]!=i+1)
	    {
	        maxi = max(i+1,maxi);
	        mini = min(i+1,mini);
	    }
	}
// 	cout<<endl;
if(maxi==-1)cout<<0<<endl;
else
cout<<(maxi-mini+1)<<endl;
}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
