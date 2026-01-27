//https://codeforces.com/contest/1847/problem/B


//follow the sample-1 , split only if the & val is 0



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


#define ipset(x) for(int i=0;i<n;i++){ll p=0;cin>>x;x.insert(p);}





void solve()

{
    
	ll n,k;	cin>>n;
	
	vll v(n,0);
	ip(v);
    
    
    int x = 0,ans=0,res=-1;
    for(int i=0;i<n;i++)
    {
        if(res==-1)
        {
            res = v[i];
            // if(res)
            // continue;
        }
    
        else
        res = res&v[i];
        if(res==0)
        {
            ans++;
            res = -1;
        }
        
    }
    if(ans==0)
    ans++;
    cout<<ans<<endl;
	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}





