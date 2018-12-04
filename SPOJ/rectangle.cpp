#include<bits/stdc++.h>
using namespace std;
int factor(int n){
	int count=1;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			count++;
	return count;
}
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		sum+=factor(i);
	printf("%d",sum);
	return 0;
}