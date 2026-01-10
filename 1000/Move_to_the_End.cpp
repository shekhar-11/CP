//https://codeforces.com/problemset/problem/2104/B


/* 
Logic is  -- every time we are moving the largest element to the right we are shifting the rest elements towards the left, 
	     so what if the largest is present in the kth time , then we need the largest element present on the left side
	    
		question states -- move an element to the end and print the sum of last k elements and k starts from 1 to n
		so at first k =1 then we move the largest element to right and that is the largest sum of last k=1 element
		at k=2 any how k-1 element will shift to left ie the last element will shift to left and the largest element before the last k-1 elements will go to the last place so as to maximize the sum


		so solution = prefix sum of last k-1 elements+ maximum array element from beginning to the (n-k) elements[considering 1 based ind]) 

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

	ll n;	cin>>n;;
	vll v(n,0);
	ip(v);
	
	ll ans = 0;
	vector<pair<ll,ll>> vis(n+1,{0,0});
// 	cout<<vis[n+1].first<<" "
ll l=0;
	for(int i=1;i<=n;i++)
	{
	    ans+= v[i-1];
	    vis[i].first += ans;
	    vis[i].second = l;
	    l = max(l,v[i-1]);
	   // cout<<vis[i].first<<"  ";
	
	    
	}
	int k=0;
	   ll maxi = *max_element(v.begin(),v.end());
	cout<<maxi<<" ";
	for(int i=n-1;i>0;i--)
	{
	    maxi = vis[i+1].second;
	    ans = maxi + (vis[n].first-vis[n-k-1].first);
	    k++;
	    cout<<ans<<" ";
	}
	cout<<endl;
	
	
	
// 	cout<<v[0];
	cout<<endl;

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
