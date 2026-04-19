//https://codeforces.com/contest/2194/problem/B

//logic was -- whichever was leading to the highest output to be noted (as only one will have the entire transfer , so 
// first collect all credit ,then remove the credit of ith index and add its original amount along with others credit to it





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
	ll n,x,y;
	cin>>n>>x>>y;
	vll v(n,0);
	ip(v);
	
	ll total = 0,maxi = -1,ans=0;
	for(int i=0;i<n;i++)
	{
	  total +=  v[i]/x;
	  
	    
	}
	for(int i=0;i<n;i++)
	{
	    ll local = total - (v[i]/x);
	    
	    ans = local*y + v[i];
	    maxi = max(maxi,ans);
	}
	cout<<maxi<<endl;



}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
