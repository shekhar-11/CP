//https://codeforces.com/contest/2123/problem/C
//prefix array is [1], [1,2] ,[1,2,3] ... and so with suffix but prefix != [2], [2,3]   it should always be from 1 


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

#define umlb unodered_map<ll,bool>

#define umci unordered_map<char,int>

#define umcb unordered_map<char,bool>

#define mci map<char,int>

#define mcb map<char,bool>

#define ip(x) for(auto &it:x)cin>>it

#define op(x) for(auto &it:x) cout<<it<<" "

void solve1()

{

	ll n;	cin>>n;
	vll v(n,0);
	ip(v);
    unordered_map<ll,bool>vis;
    ll mi = v[0];
     string ans(n,'0');
    for(int i=0;i<n;i++)
    {
      mi = min(v[i],mi);
      if(v[i]<=mi)
      ans[i] = '1';
    }
    mi = v[n-1];
    for(int i=n-1;i>=0;i--)
    {
        mi = max(mi,v[i]);
        if(v[i]>=mi)
      ans[i] = '1';
    }
    
   
    // for(int i=0;i<n;i++)
    // {
       
    // }
    cout<<ans<<endl;
	
	

}


void solve2()
 
{
 
	ll n;	cin>>n;
	vll v(n,0);
	ip(v);
    unordered_map<ll,bool>vis;
    ll mi = v[0];
    for(int i=0;i<n;i++)
    {
        mi = min(mi,v[i]);
        vis[mi] = true;
    }
    mi = v[n-1];
    for(int i=n-1;i>=0;i--)
    {
        mi = max(mi,v[i]);
        vis[mi] = true;
    }
    
    string ans(n,'1');
    for(int i=0;i<n;i++)
    {
        if(!vis[v[i]])
        ans[i] = '0';
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

