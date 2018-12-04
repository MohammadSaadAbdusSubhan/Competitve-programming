#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
bool binarysearch(lli a[],lli low,lli high,lli x){
	lli mid=(lli)(high+low)/2;
	while(low<=high){
		if(a[mid]==x)
			return true;
		else if(a[mid]>x)
			return binarysearch(a,low,mid-1,x);
		else if(a[mid]<x)
			return binarysearch(a,mid+1,high,x); 
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	lli n,k;
	cin>>n>>k;
	lli a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	lli count=0;
	for(i=0;i<n;i++)
		if(binarysearch(a,i+1,n,k+a[i]))
			count++;
	cout<<count;
	return 0;
}