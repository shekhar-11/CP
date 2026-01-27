//https://codeforces.com/contest/1844/problem/B

//mex can have the primes as value if we target the outcome to be 2 , for this most of the subarrays to have 1 -- possible only if 1 is present somewhere around center


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
    ll n;
    cin>>n;
    int k=3;
    // if(n==1)
    // {
    //     cout<<1<<endl;
    //     return;
    // }
    // if(n==2)
    // {
    // cout<<1<<" "<<2<<endl;
    //     return;
    // }
    bool f=0;
    for(int i=1;i<=n;i++)
    {
        if(n/2+(n%2)==i )
        {
        cout<<1<<" ";
            f=1;
        }
        else if(k<=n)
        cout<<k++<<" ";
    }
    if(n>=2)
    cout<<2<<endl;
    
}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
