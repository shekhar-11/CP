//https://codeforces.com/contest/1941/problem/B


//observations  that each second element in a set of 3 elements -   second -= 2*first and third-=first
// if any is -ve then 0 


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
    
    int i=0,j=0;
    while(j<n)
    {
        
        
        // if(n-j<=2)
        // {
        //     cout<<"NO\n";
        //     return;
        // }
        if(v[j]<0)
        {
            cout<<"NO\n";
            return;
        }
        if(j+1<n)
        v[j+1]-= 2* v[j];
        if(j+2<n)
        v[j+2]-=v[j];
        // if(v[j+1]<0 || v[j+2]<0)
        // {
        //     cout<<"NO\n";
        //     return;
        // }
        // if(j==i)
        j++;
    }
    if(v[n-1]!=0 ||v[n-2]!=0)
    {
        cout<<"NO\n";
        return;
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

