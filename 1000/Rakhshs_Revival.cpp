//https://codeforces.com/contest/2034/problem/B


"ITS O(N) with 3 loop and I call it sliding window"



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
    ll n,k,m;
    cin>>n>>k>>m;
    
    string s;
    cin>>s;
    
    int i=0,j=0,ans=0;
    // int maxi = max(k,m);
    while(j<n)
    {
        i = j;
        int p=0;
        while(j<n && s[j]=='0')
        {
            p++;
            int g = j;
            if(p==k)
            {
                int r=m;
                while(j<n && r--)
                {
                    j++;
                }
                ans++;
                p=0;
            }
            if(g==j)
            j++;
        }
        if(j==i)
        j++;
        
    }
    cout<<ans<<endl;
   
    
    

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
