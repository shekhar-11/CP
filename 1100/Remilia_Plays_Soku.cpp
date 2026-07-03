//https://codeforces.com/problemset/problem/2228/B
//how long to catch other, needed help for edge cases ,through failed cases


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
	ll n,x1,x2,k;
	cin>>n>>x1>>x2>>k;
	
	
	if(x1==x2)
	{
	    cout<<0<<endl;
	}
	if(n<=3)
	{
	    cout<<1<<endl;
	    return;
	}
	ll diff = k+min((abs(x1-x2)%n),(n-abs(x1-x2))%n);
	cout<<diff<<endl;
	


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
