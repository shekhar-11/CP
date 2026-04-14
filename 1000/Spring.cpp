//https://codeforces.com/problemset/problem/2204/C



/*
Logic -- the lcm is where the days collides , so on that basis add and subtract



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
	ll a,b,c,n;
	cin>>a>>b>>c>>n;
	ll m =n;
	 ll ab = lcm(a,b);
// 	cout<<ab<<endl;
	  ll bc = lcm(b,c);
	  ll ac = lcm(a,c);
	  ll abc = lcm(lcm(a,b),c);
	  
	  ll ai = (m/a) - (m/ab) - (m/ac) + (m/abc); 
	  ll ci = (m/c) - (m/bc) - (m/ac) + (m/abc); 
	  ll bi = (m/b) - (m/ab) - (m/bc) + (m/abc); 
	  
	  ll atc = (m/ac) - (m/abc);
	  ll atb = (m/ab) - (m/abc);
	  ll btc = (m/bc) - (m/abc);
	  
	  ll all = (m/abc);
	  
	  
	  ai = ai*6 + atc*3 + atb*3+all*2;
        bi = bi*6 + btc*3 + atb*3 +all*2;	  
    ci = ci*6+atc*3+btc*3+all*2;
    
    if(a<=n && ai>=0)
    cout<<ai<<" ";
    else
    cout<<0<<" ";
    if(b<=n && bi>=0)
    cout<<bi<<" ";
    else
    cout<<0<<" ";
    if(c<=n && ci>=0)
    cout<<ci<<" ";
    else
    cout<<0<<" ";
    cout<<endl;
}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
