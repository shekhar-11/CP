//https://codeforces.com/problemset/problem/1862/C




/*

█ . . . .
█ . . . .
█ █ █ . .
█ █ █ . .
█ █ █ █ █
----------
1 2 3 4 5


if we see vertically --- 5,3,3,1,1

if we go horizontally then the lowest is 5 , then 3 are on the level of 2, and so 3 are on level of 3 
so lowest --- 5
at level second --- 3
at level 3  = again 3
at level 4  -- 1 (of the first vertical block consider 2nd row from top)

at level 5(  consider row 1 ) only 1 block


so -- 5,3,3,1,1 
which matches the vertical bars

as all are in descending order so check from last index ,and find the size , till where it can contribute, both block of size 1 can contribute in total only once that gives 5 
then block 3 in total can contribute for 2 more times giving height of 3 if checked from y axis towards x axis

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
	
	vll temp;
	
	ll i = n-1;
	
	if(v[0]!=n)
	{
	    
	    cout<<"NO\n";
	    return;
	}
    ll prev= 0,j=n-1;
	while(i>=0)
	{
	    ll ans = 1;
	    ll diff = v[i]-prev;
	    while(diff>0)
	    {
	       // ans = i;
	        ans = i+1;
	        temp.push_back(ans);
	        diff--;
	    }
	   // if(ans>0)
	    prev = v[i];
	    i--;
	   // j--;
	    
	}
	

	
// op(temp);
// cout<<endl;
	if(n!=temp.size())
	{
	    cout<<"NO\n";
	    return;
	}
	for(int i=0;i<n;i++)
	{
	    if(v[i]!=temp[i])
	    {
	        cout<<"NO\n";
	        return;
	    }
	}
	cout<<"YES\n";
	
	


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
