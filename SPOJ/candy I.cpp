#include<bits/stdc++.h>
using namespace std;
int main(){
	while(100000){
		long n;
		cin>>n;
		if(n==-1)
			exit(0);
		long a[n+1];
		long sum=0;
		for(long i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		long mean=sum/n;
		long ans=0;
		for(long i=0;i<n;i++){
			if(a[i]<mean)
				ans+=mean-a[i];
		}
		if(sum%n!=0)
			cout<<-1<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}