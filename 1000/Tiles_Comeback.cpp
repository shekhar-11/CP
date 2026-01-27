//https://codeforces.com/contest/1851/problem/C

//the jump is possible only if the first and last element meets the condition



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
    
	ll n,k;	cin>>n>>k;
	
	vll v(n,0);
	ip(v);


    int f=0,s=0;
    int ind1=-1,ind2=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[0])
        {
            f++;
        }
        if(f%k==0)
        {
            ind1 = i+1;
            break;
        }
    }
    if(v[0]==v[n-1])
    {
        if(f%k==0)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
        return;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==v[n-1])
        {
            s++;
        }
        if(s%k==0)
        {
            ind2 = i+1;
            break;
        }
    }
    if(ind1==-1 || ind2==-1)
    {
        cout<<"NO\n";
        return;
    }
    if(ind1<ind2)
    cout<<"YES\n";
    else
    cout<<"No\n";
	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
