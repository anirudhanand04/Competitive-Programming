#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,b[32]={};
	    cin>>n;
	    for(ll i=0;i<n;i++){
	        int a,j=0;
	        cin>>a;
	        while(a){
    	        if(b[j]==0) b[j]= a%2;
    	        a= a/2;
    	        j++;
	    }
	    }
	    ll sol=0;
	    for(ll i=0;i<32;i++)
        {
            sol += b[i];
        }
        cout<<sol<<endl;
}
	return 0;
}
