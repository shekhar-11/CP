//https://codeforces.com/problemset/problem/2191/B

/*

ques asked that can the array be arranged such that , mex of prefix != mex of suffix

logix -- its all depends on count of 0 and 1 


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
	ll n;
	cin>>n;
    vll v(n,0);
    
    
    ip(v);
    int z=0,o=0;
    // sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)z++;
        else if(v[i]==1)
        o++;
    }
    if(o==0)
    {
        if(z==1)
        cout<<"YES\n";
        // else if(z==1)
        // cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    else
    {
        if(z==0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
