//https://codeforces.com/contest/2208/problem/B


//dq and pq 

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
	ll n,k,p,m;
	cin>>n>>k>>p>>m;
	
	priority_queue<ll,vector<ll>,greater<ll>>pq;
	deque<ll>dq;
	ll o = 0,ene=0,ans=0;
	for(int i=0;i<n;i++)
	{
	    ll x ;
	    cin>>x;
	    if(i==p-1)
	    {
	    o = x;
	    x = -1e9;
	        
	    }
	    if(i<k)
	    {
	        pq.push(x);
	    }
	    else
	    {
	        dq.push_back(x);
	    }
	}
	while(ene<m)
	{
	    ll top = pq.top();
	    if(top==-1e9)
	    {
	        ene+=o;
	        if(ene<=m)
	        ans++;
	        
	    }
	    else
	    ene+=top;
	    
	    pq.pop();
	    ll f;
	    if(!dq.empty())
	    {
	     f =  dq.front();
	     dq.pop_front();
	      pq.push(f);
	     dq.push_back(top);
	        
	    }
	    else
	    pq.push(top);
	}
	cout<<ans<<endl;

}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
