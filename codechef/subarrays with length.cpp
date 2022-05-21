#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

int solve(){
    int n;
    cin>>n;
    long long sol= (long long)n * (n+1)/2;
    vector<vector<int>> inds(n+1, vector<int>(1,-1));
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        inds[x].push_back(i);
    }
    for(int i=1;i<=n;i++){
        inds[i].push_back(n);
        for(int j=1;j<(int)inds[i].size();j++){
            int l=inds[i][j] - inds[i][j-1] - 1;
            sol -= max(0LL, l-i+1);
        }
        
    }
    cout<<sol<<endl;
    return 0;
}
signed main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
