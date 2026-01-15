//https://codeforces.com/contest/2002/problem/B

//the problem can be thought in reverse ways as well -- do not always go in favour of any , check for possibility , the one having lesser chance solve that case the higher one can be handled easily
// here Bob is having lower possibility -- think when Bob wins , rest Alice is there to win 



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

#define ulb unordered_map<ll,bool>

#define umci unordered_map<char,int>

#define umcb unordered_map<char,bool>

#define mci map<char,int>

#define mcb map<char,bool>

#define ip(x) for(auto &it:x)cin>>it

#define op(x) for(auto &it:x) cout<<it<<" "

void solve()

{

	ll n;	cin>>n;
    vll a(n,0),b(n,0);
    ip(a);
    ip(b);
    
    if(a==b)
    {
    cout<<"Bob\n";
        return;
    }
    
    reverse(b.begin(),b.end());
    if(a==b){
    cout<<"Bob\n";
        return;
    }
    // else
    cout<<"Alice\n";
  
	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
