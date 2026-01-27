//https://codeforces.com/contest/1861/problem/B

//if there is 1-1 present and just before it there is 0-0 then YES


// 

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

// 	ll n;	cin>>n;
string a,b;
cin>>a>>b;
   
   ll n = a.size();
   for(int i=1;i<n;i++)
   {
       if(a[i]==b[i] && a[i]=='1')
       {
           if(a[i-1]==b[i-1] && a[i-1]=='0')
           {
               cout<<"YES\n";
               return;
           }
       }
   }
   cout<<"NO\n";
   return;

	

}

// 1 4      6 8

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;
  

}
