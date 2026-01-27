//https://codeforces.com/contest/1859/problem/B

//pick up the second largest from each array and put it in the array having smallest second largest , so therefore ignoring that second largest and taking the overall smallest value and adding in place of smallest second largest element


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
    vector<ll>v;
	ll n;	cin>>n;
	ll mini = 1e9;
	vector<ll>mainv;
	while(n--)
	{
	    
	ll k;
	cin>>k;
	vll temp(k,0);
	for(int i=0;i<k;i++)
	{
	    ll x=0;
	    cin>>x;
	   temp[i] = x;
	    mini = min(mini,x);
	    
	}
	sort(temp.begin(),temp.end());
	
                
    mainv.push_back(temp[1]);


// 	else
// 	mainv.push_back(vt[i]);
	}
	
	sort(mainv.begin(),mainv.end());
	ll sum=0;
	for(int i=1;i<mainv.size();i++)sum+=mainv[i];
// 	sum-=mainv[0];
	sum+=mini;
	cout<<sum<<endl;

// 	op(mainv);

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
