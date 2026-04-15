//https://codeforces.com/problemset/problem/2217/B


/*
Idea ----
Count how many times the array alternates from the pivot 
value on both sides. Since each operation affects both sides 
together, the answer is the maximum of the two counts, because 
the more altered side becomes the reason to flip the all.


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
	ll n,k;
	cin>>n>>k;
	vll v(n,0);
	ip(v);
	ll ind;
	cin>>ind;
	ind--;
	ll ans=0;
	int x = 0;
	while(x<n && v[x]==v[ind])
	x++;
	ll left=0,right=0;
	for(int i=x;i<ind;i++)
	{
	    if(v[i]!=v[i+1])
	    left++;
	    
	}
	x = n-1;
	while(x>=0 && v[x]==v[ind])
    x--;
    	for(int i=x;i>ind;i--)
	{
	    if(v[i]!=v[i-1])
	    right++;
	    
	}
	if(left==0 && right==0)
	{
	    cout<<0<<endl;
	    return;
	}
	else
	{
	    cout<<max(left+1,right+1)<<endl;
	}
	
    
// 	cout<<ans<<endl;
	


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
