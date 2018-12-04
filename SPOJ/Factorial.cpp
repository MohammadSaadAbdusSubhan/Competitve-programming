#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,sum=0;
		cin>>n;
		long int temp=n;
		for(int i=0;i<n;i++){
			temp/=5;
			sum+=(temp);
			if(temp<5)
				break;
		}
		cout<<sum<<endl;
	}
	return 0;
}