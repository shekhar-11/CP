
//https://codeforces.com/problemset/problem/2154/B



/*

NOTE: WHEN OPERATIONS ONLY SHRINK FROM ENDS , TRACK MIN AND MAX POSSIBLE BOUNDARIES





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
	ll n;
	cin>>n;
	vll v(n,0);
	ip(v);
	ll maxi = -1,ans=0;
	for(int i=0;i<n;i++)
	{
	    maxi = max(maxi,v[i]);
	    if(i%2)
	    v[i] = maxi;
	}
	for(int i=0;i<n;i++)
	{
	   
	   
	    if(i>0 && i%2)
	    {
	      
	        ans += ((v[i]<=v[i-1])?(v[i-1]-v[i]+1):0);
	        
	    }
	    if(i<n-1 && i%2)
	    {
	       
	        ans += ((v[i]<=v[i+1])?(v[i+1]-v[i]+1):0);
	        if(v[i]<=v[i+1])
	        v[i+1] = v[i]-1;
	       
	    }
	    
	    
	}
	cout<<ans<<endl;

	

}





//NOTE --- TAKE THE RANGE OF MINL and MAXR or vice-versa and check whichever overlaps ---- is + as anyhow its kept else ?

/*


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
	ll n,k;
	cin>>n>>k;
	
	string s;
	cin>>s;
	string ans(n,'?');
	int z=0,o=0,t=0;
	if(n==k)
	{
	    string res(n,'-');
	    cout<<res<<endl;
	    return ;
	}
	
	for(auto &it:s)
	{
	    if(it=='0')z++;
	    else if(it=='1')o++;
	    else t++;
	}
	for(int i=0;i<z;i++)
	{
	    ans[i] = '-';
	}
	for(int i=n-1;i>=n-o;i--)
	{
	    ans[i] = '-';
	}
	int minL = z+1;
	int maxL = z+1+t;
	int  maxR= n-o;
	int minR = n-o-t;
// 	int range = maxR-minL+1;
	
    unordered_map<int,bool>vis;
    
    for(int i=minL;i<=maxR;i++)
    {
        if(vis[i])
        {
            ans[i-1]='+';
        }
        vis[i] = true;
    }
    for(int i=maxL;i<=minR;i++)
    {
        if(vis[i])
        {
            ans[i-1]='+';
        }
        vis[i] = true;
    }
    cout<<ans<<endl;

	


}




*/





int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
