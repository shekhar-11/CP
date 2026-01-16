//https://codeforces.com/contest/1986/problem/B


//simple matrix



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

	ll r,c;
	cin>>r>>c;
	
	vector<vector<ll>>v(r,vector<ll>(c,0));
	
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	cin>>v[i][j];
	
	
	for(int i=0;i<r;i++)
	{
	    
	    for(int j=0;j<c;j++)
	    {
	        ll maxi = -1;
	        bool f=0;
	       // ll val1 = -1,val2=-1,val3=-1,val4=-1;
	        if(i>0 ){
	            if(v[i][j]>v[i-1][j])
	            {
	            maxi = max(maxi,v[i-1][j]);
	             }
	             else
	             {
	                 f=1;
	             }
	        }
	        if(i<r-1 ){
	        if(v[i+1][j]<v[i][j])
	        {
	            maxi = max(maxi,v[i+1][j]);
	        }
	        else
	        f=1;
	        }
	        if(j>0 )
            {
	        if(v[i][j-1] <v[i][j])
	        {
	            maxi = max(maxi,v[i][j-1] );
	            
	        }
	        else
	        f=1;
            }
	        if(j<c-1) 
	        {
	            
	        if(v[i][j+1]<v[i][j])
	        maxi = max(maxi,v[i][j+1]);
	        else
	        f=1;
	        }
	        if(!f)
	        v[i][j]=maxi;
	        cout<<v[i][j]<<" ";
	    }
	    cout<<endl;
	    
	   
	}
	

	

}

int main()

{

	int t=1;

	cin>>t;

	while(t--)solve();

	return 0;

}
