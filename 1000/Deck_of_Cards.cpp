//https://codeforces.com/contest/2145/problem/B
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
	
	string s;
	cin>>s;
	
	int z=0,o=0,t=0;
	
	for(auto &it:s)
	{
	    if(it=='0')z++;
	    else if(it=='1')o++;
	    else t++;
	}
	string ans(n,'?');
	if(n==k)
	{
	    string res(n,'-');
	    cout<<res<<endl;
	    return ;
	}
// 	cout<<z<<" "<<o<<" "<<t<<endl;
	for(int i=0;i<z;i++)
	ans[i] = '-';
	for(int i=n-1;i>=n-o;i--)
	ans[i] = '-';
	for(int i=z+t;i<n-(t+o);i++)
	ans[i] = '+';
	
	cout<<ans<<endl;
	


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
