//https://codeforces.com/problemset/problem/2192/B



/*
problem states that any index i ,other than that index rest all to be flipped , and at max only once that index i to be taken 


logic --- as binary -- consider cases as 

	0 1 -- odd + odd , odd + even , even + odd, even + even


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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	
	ll o = 0,z=0;
	for(auto &it:s)
	{
	    if(it=='0')
	    z++;
	    else
	    o++;
	}
	if(n%2 && o%2)
	{
	    cout<<-1<<endl;
	    return;
	}
	
	if(o%2==0 && z%2==0)
	{
	    cout<<o<<endl;
	    if(o==0)
	    return;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        cout<<i+1<<" ";
	    }
	    cout<<endl;
	    return;
	}
	cout<<z<<endl;
	if(z==0)
	return;
	
	for(int i=0;i<n;i++)
	{
	    if(s[i]=='0')
	    cout<<i+1<<" ";
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
