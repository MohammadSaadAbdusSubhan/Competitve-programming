#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
		long long int energy=0,sum=0,n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			if(sum<0){
				energy+=fabs(sum);
				sum=0;
			}
		
		}
		cout<<"Scenario #"<<j<<": "<<energy+1<<endl;
	}
	return 0;
}