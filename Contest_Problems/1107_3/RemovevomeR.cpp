//https://codeforces.com/contest/2241/problem/C

//solution is -- if 101 or 010 if 1 comes in between the occurences of 2 zeros and same for 1 , then its valid


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
#define Y     cout<<"YES\n" 
#define N     cout<<"NO\n" 




void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    int i=0;
    int fz = 1e9,lz = -1,fo=1e9,lo=-1;
    while(i<n)
    {
        if(s[i]=='0')
        {
            fz = min(fz,i);
            lz = max(lz,i);
        }
        if(s[i]=='1')
        {
            fo = min(fo,i);
            lo = max(lo,i);
        }
        i++;
    }
    if(lo==-1 || lz==-1)
    {
        cout<<1<<endl;
        return;
    }
    if((fz<fo && lz>fo) ||(fo<fz && lo>fz))
    {
        cout<<1<<endl;
        return;
        
    }
    cout<<2<<endl;
    
}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
