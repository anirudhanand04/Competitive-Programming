
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(t--){
		
		int n;
		cin>>n;
		int a[n];
		long long c=1;

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			c*=a[i];
		}

		int s = c%10;

		if(s == 2 || s == 3 || s == 5){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
			
}
