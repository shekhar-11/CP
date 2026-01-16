//https://codeforces.com/contest/1979/problem/B



//comments in solve





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
//hit and trial

	ll a,b;	cin>>a>>b;
	
	a = abs(a-b);
	
	
	int x = 0;
	while(!(a&1))
	{
	    x++;
	    a= a>>1;
	}
	x = pow(2,x);
	cout<<x<<endl;

	

}





void solve()
 
{
// logically if x==y then all will be same , else at different spots the values will be same -- how long will it be same -- until the last k bits are same , as they will change once increase in elements by 1 
// it will break once there is difference in the bit of x and y 

 
	ll a,b;	cin>>a>>b;
	
	
	
	int x = 0;
	while(((a&1)^(b&1))==0)
	{
	    x++;
	    a= a>>1;
	    b = b>>1;
	}
	x = pow(2,x);
	cout<<x<<endl;
 
	
 
}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
