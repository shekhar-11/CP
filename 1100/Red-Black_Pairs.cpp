//https://codeforces.com/problemset/problem/2225/C

// check for equal pairs, if vertical are same move ahead by 1 , else if horizontal are same move ahead by  2 , else ans++, increase the loop by 1 

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
	string s1,s2;
	cin>>s1>>s2;
	ll ans=0;
       for(int i=0;i<n;)
       {
           if(s1[i]==s2[i])
           {
               i++;
           continue;
           }
           
           if(i<n-1 && (s1[i]!=s1[i+1]) ||(s2[i]!=s2[i+1]))
           {
           ans++;
            i++;   
           }
           else
           {
               i+=2;
           }
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
