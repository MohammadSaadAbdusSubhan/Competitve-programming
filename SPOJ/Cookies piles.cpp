#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n,a,d;
		cin>>n>>a>>d;
		int sum=ceil(n)/2*(2*a+(n-1)*d);
		cout<<sum<<endl;
	}
	return 0;
}