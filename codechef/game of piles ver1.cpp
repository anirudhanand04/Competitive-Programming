#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    long long n;cin>>n;
	    int max=0;
	    int a[n];
	    int count=0;
	    for(long long i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==1){count++;}
	        max+=a[i]-2;
	    }
	    if(count>0){
	        cout<<"chef"<<endl;
	    }
	    else{
    	    if(max%2==0){
    	        cout<<"chefina"<<endl;
    	    }
    	    else{
    	        cout<<"chef"<<endl; 
    	    }
	    
	}
	}
	return 0;
}
