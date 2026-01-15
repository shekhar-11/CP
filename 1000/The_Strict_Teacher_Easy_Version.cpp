//https://codeforces.com/contest/2005/problem/B1


/*

don't define own problem -- if its linear do not take it as cyclic

*/




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
    ll n,k,m;
    cin>>n>>k>>m;
   
    vll v(2,0);
    ip(v);
    int x;
    cin>>x;
    
    ll maxi = max(v[0],v[1]);
    ll mini = min(v[0],v[1]);
    ll ans = -1;
    
    if(x<=maxi && x>=mini)
    {
        ll mp  = (maxi+mini)/2;
        
        mini = min(abs(maxi-mp),abs(mini-mp));
        cout<<mini<<endl;
        
      
        // maxi = min(abs(i-x),abs(x-j));
        // cout<<maxi<<endl;
        return;
    }
    else if(x<mini)
    {
        cout<<mini-1<<endl;
        return;
    }
    else if(x>maxi)
    {
        cout<<n-maxi<<endl;
        return;
    }
    

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
