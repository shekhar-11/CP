//https://codeforces.com/contest/2055/problem/B


//check the minimum conditions ---- if more than 1 less then not possible , or if more than 0 required and at least 1 equal then also not possible



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
    vll a(n,0),b(n,0) ;
    ip(a);
    ip(b);
    
    ll balance = 0,eq=0,mini = 1e9,maxi=-1e9;
    for(int i=0;i<n;i++)
    {
        // a[i]-=balance;
        if(a[i]<b[i])
        {
            balance++; 
            maxi = max(maxi,b[i]-a[i]);
        }
        else if(a[i]==b[i])
        eq++;
        
        else
        {
            mini  =min(mini,a[i]-b[i]);
        }
    }
    if(balance==0)
    {
        cout<<"YES\n";
        return;
    }


    else if(balance>=2 || (eq>=1 && balance>=1)){
    cout<<"NO\n";
        return;
    }
    
    if(mini<maxi)
    {
        cout<<"NO\n";
    }
    else
    cout<<"YES\n";
    
	


}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
