#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
	int remainder,ans=0;
	while(n!=0){
		remainder=n%10;
		ans=ans*10+remainder;
		n/=10;
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int ans=reverse(a)+reverse(b);
		cout<<reverse(ans)<<endl;
	}
	return 0;
}