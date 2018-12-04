#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>0)
			sum+=a;
	}
	cout<<sum;
	return 0;
}