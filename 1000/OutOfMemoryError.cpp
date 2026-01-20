//https://codeforces.com/contest/2185/problem/D


// contest problem ---- upsolve ---- good observation can lead to tricking tc


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

	ll n,m,h;	cin>>n>>m>>h;
	
	vll v(n,0);
	ip(v);

    vector<pair<long long,ll>>vis(m,{0,0});
    ll prev = 0;
    for(int i=0;i<m;i++)
    {
        ll ind,val;
        cin>>ind>>val;
        
        vis[i].first = ind-1;
        vis[i].second = val;
        v[ind-1]+=val;
        
        if(v[ind-1]>h)
        {
            ll j = i;
            while(j>=prev )
            {
                ll k = vis[j].first;
                ll x = vis[j].second;
                v[k]-=x;
                j--;
            }
            prev = i+1;
        }
        
    }
    op(v);
    cout<<endl;
   
	
	
	
	
// vll vs(n,0);

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}

