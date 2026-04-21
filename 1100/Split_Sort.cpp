//https://codeforces.com/problemset/problem/1863/B


/*

logic 1 --- start from last , if element is present here and its just higher value is present before it (prefix to it )in the array,, then it would need an operation

note mentioned else -- break , such that only x and x+1 is checked , as only these needs to be suffled if present, if checked for further , it can be adjusted by overall, so consider 
the GREEDIEST, so x and x+1 as these needs to be sorted




now logic 2-- store the position of elements as---
cin>>x 
v[x] = i , so lets say if array in input is 1,2,3,4,5 then v[1]=1, v[2]=2 .....
so now we have the position of array

3 1 2  --- v[3] = 1 , v[1]=2 v[2=+] =3 


for correct order the position should go as 1,2,3,4,5... as v[i]<v[i+1]<v[i+2].......
so if v[i+1]<v[i] that means they are breaking the position flow so ans++


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





void solve1()
{
	ll n;
	cin>>n;
	vll v(n,0);
	ip(v);
	map<ll ,bool>vis;
// 	vis[v[n-1]]
    ll ans = 0;
	for(int i=n-1;i>=0;i--)
	{
	   for(int x = v[i]+1;x<=n;x++)
	   {
	       if(!vis[x])
	       {
	           vis[x] = true;
	           ans++;
	           break;
	       }
	       else
	       break;
	   }
	   vis[v[i]] = true;
	}
	cout<<ans<<endl;
	


}


void solve2()
{
	ll n;
	cin>>n;
	vll v(n+1,0);
	for(int i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		v[x] = i;


	}

	ll ans=0;
	for(int i=2;i<=n;i++)
	{
		if(v[i-1]>v[i])
		ans++;
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
