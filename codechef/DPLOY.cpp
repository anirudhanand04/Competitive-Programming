#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,sol;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]!=0) sol=i;
	    }
	    cout<<sol<<endl;
	}
	return 0;
}
