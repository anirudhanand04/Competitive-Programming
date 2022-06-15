#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    int a[n];
	    int cnt=1;
	    for(int i=0;i<n;i++){
	        cin>>a[i];//savig the array
	    }
	    for(int i=1;i<n;i++){
	       if(a[i]>a[i-1])//sortig 
	       a[i]=a[i-1];
	   }
	   for(int i=0;i<n-1;i++){
	       if(a[i]>a[i+1])
	       cnt++;
	   }
	    cout<<cnt<<endl;
	}
	return 0;
}
