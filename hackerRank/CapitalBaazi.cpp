#include <iostream>
#include <bits/stdc++.h>

using namespace std;
char conversion(char c){
	return ('A'+(c-'a'));
}
int main() {
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			cout<<"\n";
		}
		if(s[i]>='a' && s[i]<='z'){
			cout<<conversion(s[i]);
		}
		if(s[i]>='A' && s[i]<='Z'){
			cout<<s[i];
		}
	}
	return 0;
	
}
