#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
	int n;
	cin >> n;
	vector<int> mx(11);
	for(int i = 0; i < n; i++) {
		int p, s;
		cin >> p >> s;
		mx[p] = max(mx[p], s);
	}
	cout << accumulate(begin(mx), begin(mx) + 9, 0LL) << endl;
}
 
signed main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
