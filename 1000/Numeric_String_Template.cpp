//https://codeforces.com/problemset/problem/2000/C

//brute is brute


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
	ll k;
	cin>>k;
	
	while(k--)
	{
	    string s;
	    cin>>s;
	    if(s.size()<n || s.size()>n)
	    {
	        cout<<"NO\n";
	        continue;
	    }
	    unordered_map<ll,char>vis;
	    unordered_map<char,ll>visc;
	    bool f=0;
	    for(int i=0;i<n;i++)
	    {
	        if(vis.find(v[i])==vis.end())
	        {
	            vis[v[i]]=s[i];
	        }
	        else
	        {
	            if(s[i]!=vis[v[i]])
	            {
	                cout<<"NO\n";
	                f=1;
	                break;
	            }
	            
	        }
	        if(visc.find(s[i])==visc.end())
	        {
	            visc[s[i]]=v[i];
	        }
	        else
	        {
	            if(visc[s[i]]!=v[i])
	            {
	                f=1;
	                cout<<"NO\n";
	                break;
	            }
	        }
	    }
	    if(!f)
	    cout<<"YES\n";
	}

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
