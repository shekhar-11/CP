//https://codeforces.com/contest/2093/problem/C

/*
check for k>1 for n!=1
for k>1 for n=1 
and for k=1 check for prime


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
bool check(ll n)
{
    if(n<=3)
    return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}


void solve()

{

    ll n,k;
    cin>>n>>k;
    
    if(n==1 && k==1)
    {
        cout<<"NO\n";
        return ;
    }
    if(k>1)
    {
        if(n!=1)
        {
            cout<<"NO\n";
            return ;
        }
        else
        {
            if(k==2)
            {
                cout<<"YES\n";
            }
            else
            cout<<"NO\n";
        }
        return ;
    }
    if(k==1)
    {
        if(check(n))
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
        
    }
    
    
    

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}



