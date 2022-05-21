#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll int n,x,y,i,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                count+=1;
            }
        }
        int sol;
        if(count%2==0){sol=count/2;}
        else{
            sol=count/2 + 1;
        }
        cout<<sol<<endl;
    }
    return 0;
}
