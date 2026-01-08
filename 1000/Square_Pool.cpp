//https://codeforces.com/contest/2120/problem/B

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

void solve()

{

	ll n,k;	cin>>n>>k;
	ll ans=0;
	long long dx,dy,x,y;
    while(n--)
    {
        cin>>dx>>dy>>x>>y;
        
        if(x==y)
        {
            if(dx==dy)
            {
                ans++;
            }
            else
            {
                if(x==k/2 && k%x==0)
                ans++;
                
            }
        }
        else
        {
            if(dx!=dy)
            {
                
            ll mini = min(x,y);
            if(mini==abs(k-max(x,y)))
            ans++;
            }
            
        }
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
