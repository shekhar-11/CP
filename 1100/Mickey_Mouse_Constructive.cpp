//https://codeforces.com/contest/2211/problem/B


//two points to be noticed -- sum will be x-y 
// second is that the the partitions will take place , as no. of factors present for the sum(x-y)
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ---- 11 elements -- factors -- 1 and 11 , so total =2 


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
	ll total = n-k;
	ll a=0;
	ll sum = abs(total);
	
	for(int i=1;i<=sum;i++)
	{
	    if(sum%i==0)
	    a++;
	}
	if(a==0)a=1;
	cout<<a<<endl;
	for(int i=0;i<n;i++)
	{
	    cout<<1<<" ";
	}
	for(int i=0;i<k;i++)
	{
	    cout<<-1<<" ";
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
