//https://codeforces.com/contest/2199/problem/A

//kotlin ques 

/*

simple ques , basic if else

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin>>k;

        int a1,b1,a2,b2;
        cin>>a1>>b1;
        cin>>a2>>b2;

        int a = 0, b = 0;

        if (a1 > b1) a++; 
	else b++;
        if (a2 > b2) a++; 
	else b++;

        if (a1 + a2 < b1 + b2 + k)
            cout << "YES\n"; 
	else if(a1 + a2 > b1 + b2 + k)
            cout << "NO\n"; 
	else {
            if (a>b) 
	    cout << "NO\n";
            else
	    cout << "YES\n";
        }
    }
    return 0;
}
