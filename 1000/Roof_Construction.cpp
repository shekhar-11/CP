//https://codeforces.com/problemset/problem/1632/B

//arrange permutation such that the adjacent elements exor is minimized for max of all the exor
// logic -- never keep power of 2 with just lesseer number ,ie  4 and 3 never adjacent,--



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
	ll n;
	cin>>n;
	ll last = 0;
	map<ll,bool>vis;
	for(ll i=n-1;i>=0;i--)
	{
	     if(i > 0 && (i & (i - 1)) == 0 && i%2==0 && !vis[i])
	     {
	         cout<<i<<" ";
	         
	         vis[i] = true;
	         if(!vis[last])
	         cout<<last<<" ";
	         vis[last] = true;
	         last++;
	         
	     }
	     else
	     {
	         if(!vis[i])
	         {
	             cout<<i<<" ";
	             vis[i] = true;
	         }
	     }
	}
	cout<<endl;
	
	
	
}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
