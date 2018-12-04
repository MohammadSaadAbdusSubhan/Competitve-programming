#include<bits/stdc++.h>
using namespace std;
int binarysearch(long a[],int low,int high,long x){
	int mid=(high+low)/2;
	while(low<=high){
		if(a[mid]==x){
			if(mid == 0 || a[mid-1]!=x)
				return mid;
			return binarysearch(a,low,mid-1,x);
		}
		else if(a[mid]>x)
			return binarysearch(a,low,mid-1,x);
		else
			return binarysearch(a,mid+1,high,x);
	}
	return -1;
}
int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n,q;
	const int maxa=1e5;
	scanf("%d%d",&n,&q);
	long int a[maxa];
	for(int i=0;i<n;i++)
		scanf("%ld",&a[i]);
	while(q--){
		long int x;
		scanf("%ld",&x);
		printf("%d\n",binarysearch(a,0,n-1,x));
	}
	return 0;
}