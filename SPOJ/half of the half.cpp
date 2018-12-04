#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=0;
		int n=s.size()/2;
		while(i<n){
			cout<<s[i];
			i+=2;
		}
		cout<<endl;
	}
	return 0;
}