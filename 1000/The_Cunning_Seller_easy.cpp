//https://codeforces.com/contest/2132/problem/C1
//Deal is always when there is a power of 3 so for any n , if there are power of 3 then there is a solution for whatever power 3 is present , then repeat by reducing element and finding if any other pow(3) present till n>0



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

int lowest_pow(ll &n)
{
    long long val = 1,x=0;
    
    while(val<=n)
    {
        val = val*3;
        x++;
    }
    if(val>n)
    x--;
    
    return x ;
}

void solve()

{

	ll n;	cin>>n;
	
	long long ans=0;
	while(n>0)
	{
	   int x = lowest_pow(n);

	    ans += (ll)pow(3,x+1) + x*(ll)(pow(3,x-1));
	    
	    n-= (ll)pow(3,x);
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

