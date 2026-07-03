//https://codeforces.com/problemset/problem/1632/A

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
    if(n<=1)
    cout<<"YES\n";
    else if(n==2 && s[0]!=s[1])
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
	
	
	
}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
