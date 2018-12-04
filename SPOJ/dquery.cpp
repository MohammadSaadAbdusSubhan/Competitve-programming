#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define maxa 100000
int ans[maxa],block,freq[maxa];
int query{
	int l,r,ind;
}q[maxa];
bool cmp(query a,query b){
	if(a.l/block != a.r/block)
		return a.l/block < a.r/block;
	return a.r < a.l;
}
int main(){
	int n,a[maxa];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m;
	for(int i=0;i<m;i++){
		cin>>q[i].l>>q[i].r;
		q[i].ind=i;
	}
	block=(int)sqrt(n);
	sort(a,a+n,cmp);
	int sum=0,start=0,end=0;
	for(int i=0;i<m;i++){
		while(start<q[i].l){
			freq[a[start]]--;
			if(freq[a[start]]==0)
				sum--;
			start++;
		}
		while(start>q[i].l){
			start--;
			freq[a[start]]++;
			if(freq[a[start]]==1)
				sum++;
		}
		while(end>q[i].r){
			freq[a[end]]--;
			if(freq[a[end]]==0)
				sum--;
			end--;
		}
		while(end<q[i].r){
			end++;
			freq[a[end]]++;
			if(freq[a[end]]==1)
				sum++;
		}
		ans[a[i].ind]=sum;
	}
	for(int i=0;i<m;i++)
		cout<<ans[i]<<endl;
	return 0;
}