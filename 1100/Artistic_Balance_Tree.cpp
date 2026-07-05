//https://codeforces.com/contest/2222/problem/B

//question says that a subarray length has to be reversed and the value on a particular place has to be marked and that mark will remain, we need to minimize the sum of unmarked values
// key point: EVEN IF THE ELEMENTS ARE REVERSED , THE PARITY REMAINS, ie , ODD WILL GO BACK TO ODD and EVEN WILL GO BACK TO EVEN INDEX


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
	ll n,x;
	cin>>n>>x;
	priority_queue<ll>pqo;
	priority_queue<ll>pqe;
	
	ll ans = 0;
	for(int i=1;i<=n;i++)
	{
	    ll val;
	    cin>>val;
	    if(i%2)
	    pqo.push(val);
	    else
	    pqe.push(val);
	    
	   // ans+=val;
	}
// 	cout<<pqo.size()<<" "<<pqe.size()
	bool nego = 0,nege=0;
	int c=0,d=0;
	while(x--)
	{
	    ll val;
	    cin>>val;
	    if(val%2)
	    {
	        ll tp = pqo.top();
	        if(tp>=0 && !pqo.empty())
	        {
	       // ans-=tp;
	            pqo.pop();
	            c++;
	            
	        }
	        else
	        {
	            if(c==0)
	            nego=1;
	        }
	        
	        
	    }
	    else
	    {
	          ll tp = pqe.top();
	        if(tp>=0 && !pqe.empty())
	        {
	           // ans-=tp;
	            pqe.pop();
	            d++;
	        }
	        else
	        {
	            if(d==0)
	        nege=1;
	        }
	    }
	}
	if(nego && !pqo.empty())
	pqo.pop();
	if(nege && !pqe.empty())
	pqe.pop();
	
	while(!pqo.empty())
	{
	    ans+=pqo.top();
	    pqo.pop();
	}
	while(!pqe.empty())
	{
	    ans+=pqe.top();
	    pqe.pop();
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


