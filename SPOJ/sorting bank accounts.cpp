#include<bits/stdc++.h>
using namespace std;
string a[100002];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<=n;i++)
			getline(cin,a[i]);
		sort(a+1,a+n+1);
		int b=1;
		for(int i=1;i<=n;i++){
			if(a[i]==a[i+1])
				b++;
			else{
				cout<<a[i]<<" "<<b<<endl;
				b=1;
			}
		}
		cout<<endl;
	}
	return 0;
}