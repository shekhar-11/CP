//https://codeforces.com/contest/2185/problem/C



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

	ll n;	cin>>n;
    set<ll>st;
    ll pre=1e9;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
        pre = min(pre,x);
    }
    ll maxi = 0;
    ll k=1;
    for(auto &it:st)
    {
            
            if(it-pre==1)
            {
                k++;     
            }
            else
            {
                maxi = max(maxi,k);
                k=1;
            }
            pre=it;
        
    }
    maxi = max(maxi,k);
    // maxi++;
    cout<<maxi<<endl;
    

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
