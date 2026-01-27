//https://codeforces.com/contest/1906/problem/A

//recursion -- help needed,but correct approach





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

void rec(vector<vector<char>> &s1, int i, int j, string &res, string &temp,map<int,bool>&vis)
{
    if(vis[i*3+j])
    return;
    if(i>=3 || j>=3 || i<0 || j<0)
        return;
    if(!vis[i*3+j])
    {
    temp.push_back(s1[i][j]);
    vis[i*3+j]=1;
        
    }
    if(temp.size() == 3)
    {
        if(res.empty())
            res = temp;
        else
            res = min(res, temp);
        vis[i*3+j]=0;
        temp.pop_back();
        return;
    }
    
    rec(s1,i+1,j,res,temp,vis);
    rec(s1,i+1,j+1,res,temp,vis);
    rec(s1,i,j+1,res,temp,vis);
    rec(s1,i-1,j,res,temp,vis);
    rec(s1,i-1,j-1,res,temp,vis);
    rec(s1,i,j-1,res,temp,vis);
    rec(s1,i+1,j-1,res,temp,vis);
    rec(s1,i-1,j+1,res,temp,vis);
    vis[i*3+j]=0;
    temp.pop_back();   
    
}




void solve()

{
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    s1+=s2;
    s1+=s3;
    int k=0;

        vector<vector<char>>v(3,vector<char>(3,'A'));
        
        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        v[i][j] = s1[k++];
        map<int,bool>vis;
        string res = "",temp="";
        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        rec(v,i,j,res,temp,vis);
        
        cout<<res<<endl;

	

}

int main()

{

	int t=1;



	while(t--)solve();

	return 0;
  

}
