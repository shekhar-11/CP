//https://codeforces.com/contest/1931/problem/C


//the smallest segment relies on how lengthy is the first / last element continuously equal
// if both first and last are equal , then no. of elements in the mid.
// else maxlen of first or last element to be subtracted from n



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
    vll v(n,0);
    ip(v);
    
    ll fi = 0,i=0,ls=n-1,j=n-1;
    while(i<n && v[i]==v[fi])
    i++;
    while(j>=0 && v[j]==v[ls])
    j--;
    
   
    if(i==n)
    {
        cout<<0<<endl;
        return;
    }
     if(v[fi]==v[ls])
    {
        cout<<(j-i+1)<<endl;
        return;
    }
    ll maxi = max(i,n-j-1);
    
    cout<<(n-maxi)<<endl;
	

}



//unoptimized ---->
 
void solve()
 
{
 
	ll n;	cin>>n;
    vll v(n,0);
    ip(v);
    
    int fi = 0,i=0,ls=n-1,j=n-1;
    while(i<n && v[i]==v[fi])
    i++;
    while(j>=0 && v[j]==v[ls])
    j--;
    
   
    if(i==n)
    {
        cout<<0<<endl;
        return;
    }
     if(v[fi]==v[ls])
    {
        cout<<(j-i+1)<<endl;
        return;
    }
    if(i==n-j-1)
    {
        cout<<n-i<<endl;
        return;
    }
    else
    {
        if(i>n-j-1)
        {
            cout<<n-i<<endl;
            return;
        }
        cout<<n-(n-j-1)<<endl;
    }
	
 
}



int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}

