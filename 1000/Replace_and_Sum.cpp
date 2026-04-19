//https://codeforces.com/contest/2193/problem/C


//maximize the array from last then prefix sum 




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
	ll n,q;
	cin>>n>>q;
	vll a(n,0),b(n,0);
	ip(a);
	ip(b);
	ll maxi= max(a[n-1],b[n-1]);
	for(int i=n-1;i>=0;i--)
	{
	    
	    maxi =max(maxi,max(a[i],b[i]));
	    a[i] = maxi;
	}
	vll v(n+1,0);
	for(int i=1;i<=n;i++)
	{
	    v[i] = v[i-1]+ a[i-1];
	}
	for(int i=0;i<q;i++)
	{
	    ll l,r;
	    cin>>l>>r;
	    ll output = v[r]-v[l-1];
	    cout<<output<<" ";
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
