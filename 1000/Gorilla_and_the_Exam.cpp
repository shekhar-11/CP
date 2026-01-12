//https://codeforces.com/contest/2057/problem/B



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

	ll n,k;	cin>>n>>k;
	
	
	map<ll,ll>vis;
// 	vi v(n,0);
// 	ip(v);
	
	for(int i=0;i<n;i++)
	{
	    ll it;
	    cin>>it;
	vis[it]++;
	}
	if(vis.size()==1)
	{
	    cout<<1<<endl;
	    return;
	}
	
	vector<ll>v2(vis.size(),0);
	ll i=0;
    for(auto &it:vis)
    {
        v2[i++] = it.second;
    }
    sort(v2.begin(),v2.end());
    i=0;
    while(k>0 && i<v2.size())
    {
        if(k>=v2[i])
        k-=v2[i++];
        else
        break;
    }
    if(i==v2.size())
    cout<<1<<endl;
    else
    cout<<v2.size()-i<<endl;
    

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
