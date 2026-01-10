//https://codeforces.com/contest/2090/problem/B



//FORUMLA FOR [i][j] into ind --  i*columns + j                i is iterating over rows and j for columns



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

    ll n,m;
    cin>>n>>m;
   vector<vector<char>> v(n, vector<char>(m, '0'));
    unordered_map<int,int>vis;
    bool f=0;
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
            if(v[i][j]=='0')
            x++;
            else
            {
                if(x>0)
                {
                    int ind = i*m+j;
                    vis[ind]++;
                    // x=0;
                }
            }
        }
        
    }

    for(int i=0;i<m;i++)
    {
        int x=0;
        for(int j=0;j<n;j++)
        {
           
            if(v[j][i]=='0')
            x++;
            else
            {
                if(x>0)
                {
                     int ind = j*m+i;
                    vis[ind]++;
                    // x=0;
                
                }
            }
          
        }
        // cout<<endl;
        
        
    }
    for(auto &it:vis)
    {
        if(it.second>=2)
        {
            cout<<"NO\n";
            return ;
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
