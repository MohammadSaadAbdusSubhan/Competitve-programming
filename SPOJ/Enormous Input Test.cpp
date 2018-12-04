#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long n,k;
	cin>>n>>k;
	long count=0;
	for(long i=0;i<n;i++){
		long int t;
		cin>>t;
		if(t%k==0)
			count++;
	}
	cout<<count<<endl;
	return 0;
}