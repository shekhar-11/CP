//https://codeforces.com/problemset/problem/2218/D





//logic
// see if the gcd has to be unique then one way is if we have numbers as how we are incrementing

// eg -- we are incrementing as i, i+1,i+2 ......
// so at first we have -- gcd(a[i],a[i+1])), then gcd(a[i+1],a[i+2]) and so on

// so as a[i+1] is common in both the gcd then ---

// gcd(a[i],a[i+1]) && gcd(a[i+1],a[i+2])

// so if we take --- a[i+1] as common then we have gcd(a[i],a[i+2])
// now a[i+1]  is unique everytime , so if we have gcd(a[i],a[i+2]) as 1 then everytime we have gcd as a[i+1]

// so keeping this in mind we need to output no. such that the everytwo no. are coprime 


// take this example ---
// we have first element as --- 3, then 3*5 , then 5*7 ,then 7*9

// for first element 3,15 we have gcd = 3
// then 15 ,35 we have gcd = 5
// then 35,63 we have gcd = 7
// then 63,99 we have gcd = 9,, so it proceeds as how the numbers are increasing , if we take two coprimes in alternates 

// best example --- 3*5 and 5*7
// their gcd will have 5 * gcd(3,7) = 5*1 = 5, same thing goes , so if the extremes are coprimes then the intermediate will be the gcd(common multiple)



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

    ll x = 3;
    cout<<3<<" ";
    for(int i=2;i<=n;i++)
    {
    cout<<(x*(x+2))<<" ";
        x +=2;
    }
    cout<<endl;
	


}



int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}