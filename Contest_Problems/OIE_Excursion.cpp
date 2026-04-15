//https://codeforces.com/contest/2220/problem/B


/*
if there are more than or equal to m consecutive equal no. then ascending in them will lead to a point where (with increase in time) -- (ai+i )%m ==0 

so check for (consecutive equal elements <m)


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
	ll n,m;
	cin>>n>>m;
	
	vll v(n,0);
	ip(v);
	
	int i=0,j=0;
	
	while(j<n)
	{
	    i = j;
	    while(j<n && v[i]==v[j])
	    j++;
	    if(j-i>=m)
	    {
	        cout<<"NO\n";
	        return;
	    }
	    
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
