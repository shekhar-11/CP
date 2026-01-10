//https://codeforces.com/contest/2092/problem/B


/*

every a[i] has control over alternate elements of b[i] 

ie for any i of a , it can't do anything with i of b , but can work with i+1 and i-1 of b


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

    ll n;
    string a,b;
    cin>>n;
    cin>>a>>b;
    
    int fc1=0,sc1=0,sc2=0,fc2=0;
    
    for(int i=0;i<n;i+=2)
    {
        if(a[i]=='1')
        {
            sc1++;
        }
    }
    for(int i=1;i<n;i+=2)
    {
        if(b[i]=='0')
        {
            sc2++;
        }
    }
    for(int i=1;i<n;i+=2)
    {
        if(a[i]=='1')
        {
            fc1++;
        }
    }
    for(int i=0;i<n;i+=2)
    {
        if(b[i]=='0')
        {
            fc2++;
        }
    }
    
    if(sc1<=sc2 && fc1<=fc2)
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
