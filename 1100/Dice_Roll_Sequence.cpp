//https://codeforces.com/contest/2195/problem/C


//check for the consecutive same elements or elements which are in 7-x form , SLIDING WINDOW



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
    
    ll ans=0,ans2=0;
    vll v(n,0);
    ip(v);
    
    
    int i=0,j=0;
    while(j<n)
    {
       
            i= j ;
            while(j<n && (v[j]==v[i] || v[j]==7-v[i]))
            {
                j++;
            }
            ll len = j-i;
            ll temp = len-((len/2) + len%2);
            len = min(len,temp);
            ans+= len;
        }
    
    
    
    // ans1=min(ans1,ans2);
    cout<<ans<<endl;
    

}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
