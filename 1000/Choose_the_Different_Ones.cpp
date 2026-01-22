//https://codeforces.com/contest/1927/problem/C

//intuition


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
	ll n,m,k;cin>>n>>m>>k;
	set<ll>st1,st2;
	for(int i=0;i<n;i++)
	{
	    ll x;
	    cin>>x;
	    st1.insert(x);
	}
	for(int i=0;i<m;i++)
	{
	    ll x;
	    cin>>x;
	    st2.insert(x);
	}
// 	ll x=1;
ll f=0,s=0;
	for(int i=0;i<k;i++)
	{
	    if(st1.count(i+1))
	    {
	        f++;
	    }
	    if(st2.count(i+1))
	    {
	        s++;
	    }
	    if(!st1.count(i+1) && !st2.count(i+1))
	    {
	        cout<<"NO\n";
	        return;
	    }
	}
	if(f>=k/2 && s>=k/2)
	cout<<"YES\n";
	else
	cout<<"NO\n";	
}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
