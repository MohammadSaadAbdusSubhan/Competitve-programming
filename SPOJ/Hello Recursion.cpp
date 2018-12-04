#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n){
	if(n<=0)
		return 0;
	return (solve(a,n-1)+a[n-1]);
}
int main(){
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<"Case "<<j<<": "<<solve(a,n)<<endl;;
	}
	return 0;
}