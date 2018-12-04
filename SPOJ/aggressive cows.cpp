#include<bits/stdc++.h>
using namespace std;
bool ok(long a[],int n,int c,int x){
	int cows=1,current_distance=0;
	for(int i=1;i<n;i++){
		if(current_distance+a[i]-a[i-1]<=x)
			current_distance+=a[i]-a[i-1];
		else
			cows++,current_distance=0;
	}
	return (cows>=c);
}
int main(){
	int t,n,c;
	long a[n];
	cin>>t;
	while(t--){
		cin>>n>>c;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int low=0;
		int ans;
		int high=a[n-1]-a[0];
		while(low<=high){
			int mid=(low+high)/2;
			if(ok(a,n,c,mid)){
				ans=mid;
				low=mid+1;
			}
			else
				high=mid-1;
		}
		cout<<ans+1<<endl;
	}
	return 0;
}