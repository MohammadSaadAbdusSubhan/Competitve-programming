#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,c;
		cin>>l>>c;
		bool flag=true;
		for(int i=2;i<=l+1;i++){
			for(int j=2;j<=c+1;j++){
				if(i%2==0){
					if(j%2==0)
						cout<<"*";
					else
						cout<<".";
				}
				if(i%2!=0){
					if(j%2==0)
						cout<<".";
					else
						cout<<"*";
				}
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}