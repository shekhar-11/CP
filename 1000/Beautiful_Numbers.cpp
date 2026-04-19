//https://codeforces.com/contest/2203/problem/B


/*
given its said f(x) means sum of digits -- asking how many numbers to be replaced such that --->>>>> f(x) == f(f(x))

this is only possible if the sum of digits is below 10 ie <=9

so rest every no. can be made as 0 except the first digit as the number should not contain leading 0 



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
	string s;
	cin>>s;
	ll ans=0;
	
	sort(s.begin()+1,s.end());
	ll c1=0,c2=0,i=0;
	
	while(i<s.size() && ans<=9)
	{
	    ans+=(s[i]-'0');
	    i++;
	    if(ans<=9)
	    c1++;
	}
	if(s[0]!='1')
	{
	s[0] = '1';
	c2--;
	    
	}
	i=0;
	ans = 0;
	while(i<s.size() && ans<=9)
	{
	    ans+=(s[i]-'0');
	    i++;
	    if(ans<=9)
	    c2++;
	}
	ll maxi = min(s.size()-c1,s.size()-c2);
	cout<<maxi<<endl;
	
	
	
	
	
// 	cout<<0<<endl;
	


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
