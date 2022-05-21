#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    ll n,a,b,c,d;
	    cin>>n>>a>>b>>c>>d;
	    ll sol=max(a,max(b,max(c,d)));
	    cout<<sol<<endl;
	    
	}
	return 0;
}
