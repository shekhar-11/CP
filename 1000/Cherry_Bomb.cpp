//https://codeforces.com/contest/2106/problem/C

/*
case1 -- when all non -1 values sum a[i]+b[i] are not equal 
case 2 -- when all are -1 
case 3 --  when (a[i]+b[i])-maximum_val_with_-1 is neg) or (a[i]+b[i]-minimum_val_with_-1 >k)   

else all have 1
*/


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
	
	vll a(n,0),b(n,0);
	ip(a);
	ip(b);
	
	ll maxi = -1,miniwithNeg=1e9,maxiwithNeg = -1;
	for(int i=0;i<n;i++)
	{
	    if(b[i]!=-1)
	    {
	        if(maxi==-1)
	        maxi = a[i]+b[i];
	        else
	        {
	            if(maxi!=a[i]+b[i])
	            {
	                cout<<0<<endl;
	                return ;
	            }
	        }
	    }
	    else
	    {
	        maxiwithNeg = max(maxiwithNeg,a[i]);
	        miniwithNeg = min(miniwithNeg,a[i]);
	    }
	    
	}
// 	cout<<maxiwithNeg<<"  "<<miniwithNeg<<endl;

	if(maxi==-1)
	{
    	cout<<k+miniwithNeg-maxiwithNeg+1<<endl;
	    return;
	}
		if(maxiwithNeg>maxi || (maxi-miniwithNeg>k) )
	{
	    cout<<0<<endl;
	    return ;
	    
	}

    
    cout<<1<<endl;
	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
