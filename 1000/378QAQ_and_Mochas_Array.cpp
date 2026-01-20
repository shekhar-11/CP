//https://codeforces.com/contest/1975/problem/B


//choose 2 elements both are coprimes and then check 


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
    ll fm = 1e9,sm=1e9;
    ip(v);
    set<ll>st(v.begin(),v.end());
    bool fl=0;
    for(auto it:st)
    {
        if(fm==1e9)
        fm = it;
        else 
        {
            if(it%fm!=0)
            {
            sm = it;
            break;
                
            }
        }
    }
    if(fm==1)
    {
        cout<<"YES\n";
        return;
    }
    if(sm==1e9)
    sm = fm;
   for(int i=0;i<n;i++)
   {
       if(v[i]%fm!=0 && v[i]%sm!=0)
       {
           fl=1;
           break;
       }
   }
   if(fl)
   cout<<"NO\n";
   else
   cout<<"YES\n";

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
