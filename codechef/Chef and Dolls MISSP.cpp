#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(a,n) for (int i = a; i < n;i++)
void solve()
{
int n;
cin>>n;
int temp;
map<int,int> mp;
fr(0,n)
{
    cin>>temp;
    ++mp[temp];
}
for(auto i=mp.begin();i!=mp.end();i++)
{
    
    if((i->second%2)==1)
    cout<<i->first<<"\n";
}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
