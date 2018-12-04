#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long a[n],sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	int mean=sum/n;
	long ans=0;
	for(int i=0;i<n;i++)
		if(a[i]<mean)
			ans+=mean-a[i];
	cout<<ans;
	return 0;
}