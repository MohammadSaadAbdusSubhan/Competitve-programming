#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int c,k,w;
		cin>>c>>k>>w;
		if(k/w==c)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}