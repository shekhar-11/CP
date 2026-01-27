//https://codeforces.com/contest/1907/problem/B

//simple and intuitional



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

	string s;
	cin>>s;
    string ans="";
    int B=0,b=0;
    map<int,bool>vis;
    for(int i=s.size()-1;i>=0;i--)
    {
        
        if(s[i]=='b')
        b++;
        else if(s[i]=='B')
        B++;
        else
        {
            if(s[i]>=65 && s[i]<=90)
            {
                if(B>0)
                {
                    B--;
                }
                else
                    vis[i]=1;
            }
            else
            {
                if(b>0)
                {
                    b--;
                }
                    else
                    vis[i]=1;
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(vis[i])
        ans.push_back(s[i]);
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
