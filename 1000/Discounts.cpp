//https://codeforces.com/contest/2143/problem/B
//can be solved in other ways as well (just ascending sort of both arrays)




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

	ll n,k;	cin>>n>>k;
    vll vn(n,0);
    vll vk(k,0);
    ip(vn);
    ip(vk);
    
    
    sort(vn.rbegin(),vn.rend());
    sort(vk.begin(),vk.end());
    long long ans=0,j=0; 
    for(int i=0;i<k;i++)
    {
        ll x = vk[i];
        // if(x>=1)
        // j++;
        while(x>1 && j<n)
        {
           
            ans+=vn[j++];
            x--;
        }
        if(x==1)
        j++;
        
    }
    while(j<n)
    ans+=vn[j++];
    cout<<ans<<endl;
	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
