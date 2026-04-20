//https://codeforces.com/problemset/problem/1863/C


/*
ques was asking -- replace every element from 1 to n by its mex and this operation to be occuring k times


pattern , the mex was shifting towards right , and it was cyclic so , k%(n+1) , n+1 th element was mex

so this was the pattern 


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
	ll n,k;
	cin>>n>>k;
	vll v(n,0);
	ip(v);
	
	ll sum = 0;
	for(auto &it:v)
	sum += it;
	
	ll rem = abs(sum-(((n+1) * n)/2));
	v.push_back(rem);
// 	cout<<rem<<endl;
	
	k = k% (n+1);
	
    
    for(int i=0;i<n;i++)
    {
        cout<< (v[(((i-k)%(n+1))+(n+1))%(n+1)]) <<" ";
    }
    
	cout<<endl;
/*

or another way to cycle shift is --- 

reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());


The above given are for the right shift 
Note for the right shift, the previous element of array is to be present in the current index, so v[i] = v[i-k]





*/	


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
