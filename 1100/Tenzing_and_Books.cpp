//https://codeforces.com/problemset/problem/1842/B


//needed help 

//learnt --  a number 'a' wont affect the other number 'b' if all the set bits present in the number a is also present in number b

//ie  a | b == b

// eg a = 101 b = 11111111111100000000101 , then a|b = b
// secondly if a number is being or multiple times so it will never decrease , either constant or increase




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
	ll n,res;
	cin>>n>>res;
	
	vll a(n,0),b(n,0),c(n,0);
	ip(a);
	ip(b);
	ip(c);
	
	ll temp = 0;
	
	for(int i=0;i<n;i++)
	{
	   if((a[i]|res)!=res)
	   break;
	   temp |= a[i];
	}
	for(int i=0;i<n;i++)
	{
	   if((b[i]|res)!=res)
	   break;
	   temp |= b[i];
	}
	for(int i=0;i<n;i++)
	{
	   if((res|c[i])!=res)
	   break;
	   temp |= c[i];
	}
	if(res==temp)
	{
	    cout<<"YES\n";
	    return;
	}
	
	cout<<"NO\n";
	return;


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}


