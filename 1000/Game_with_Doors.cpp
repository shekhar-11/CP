//https://codeforces.com/contest/2004/problem/B

//think simple -- the simple code can be made more simpler -- find common


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
   ll a,b,c,d;
   cin>>a>>b;
   cin>>c>>d;
   
   if(a==c && b==d)
   {
       cout<<(d-a)<<endl;
       return;
   }
   if(a==c)
   {
       ll ans = (min(b,d)-a+1);
       ans = ans<=0?1:ans;
       cout<<ans<<endl;
       return;
   }
   if(b==d)
   {
       ll ans =(b-max(a,c)+1);
       ans = ans<=0?1:ans;
       cout<<ans<<endl;
       return;
   }
   if(b<c || d<a)
   {
       cout<<1<<endl;
       return;
   }
   if((a<c && b>d) || (a>c && b<d ))
   {
       ll ans= (min(b,d)-max(a,c)+2);
       ans = ans<=0?1:ans;
       cout<<ans<<endl;
       return;
   }
   if((a>c && b>d) || (c>a && d>b))
   {
       ll ans=(min(b,d)-max(a,c)+2);
       ans = ans<=0?1:ans;
       cout<<ans<<endl;
       return;
   }
  

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
