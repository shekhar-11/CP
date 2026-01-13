//https://codeforces.com/contest/2037/problem/C


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
    
   if(n<=4)
   {
       cout<<-1<<endl;
       return;
   }
   if(n==5 || n==6)
   {
       cout<<1<<" "<<3<<" "<<5<<" "<<4<<" "<<2;
       if(n==6)
       cout<<" "<<6;
       cout<<endl;
       return;
   }
   for(int i=1;i<=n;i+=2)
   {
       if(i==7)
       continue;
       cout<<i<<" ";
   }
   cout<<7<<endl;
   for(int i=2;i<=n;i+=2)
   cout<<i<<" ";
   cout<<endl;
    
    

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
