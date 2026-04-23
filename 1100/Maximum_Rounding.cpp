//https://codeforces.com/problemset/problem/1857/B

/*

find the maximum round value for the given number


intuition --- the impact will be highest for the value which is >=5 and is present as earliest as possible in number 

for forward iteration --- first >=5 will have impact on i-1 index and break


for backward iteration --- the value having the impact till the latest 
eg -- lets say ind 5 has >=5 so impact will be till i-1 and check with the carry how long it extends till 0 

possibly if 9 is at first then ind= -1 
so rest all 0 and insert 1 in beginning



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
    string n;
    cin >> n;
    int ind1 = 1e9,ind2=1e9;
    int l = n.size();
    int carry=0;
    for(int i=0;i<l;i++)
    {
        if(n[i]>='5')
        {
            ind1 = i-1;
            break;
        }
    }
    string temp = n;
    for(int i=l-1;i>=0;i--)
    {
        if(carry==1 )
        {
            if(temp[i]>='4')
            {
                
            ind2 = i-1;
            carry = 1;
            }
            else
            {
                
            ind2 = i;
            carry = 0;
            }
            
            
        }
        
        else if(temp[i]>='5')
        {
            // temp[i] = '0';
            ind2 = i-1;
            carry = 1;
        }
        
    }
    int ind = min(ind1,ind2);
    
    for(int i=ind+1;i<l;i++)
    n[i] = '0';
    
    if(ind==-1)
    {
        n.insert(n.begin(),'1');
        cout<<n<<endl;
        return;
    }
    if(ind<l)
    n[ind] = n[ind]+1;
    cout<<n<<endl;
    
    
    
   
}

int main()
{
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}
