#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool flag=true;
	while(scanf("%d",&n) && n){
		flag=true;
		vector<int> v;
		int station;
		for(int i=0;i<n;i++){
			cin>>station;
			v.push_back(station);
		}
		sort(v.begin(),v.end());
		for(int i=1;i<=n-1;i++){
			if(v[i]-v[i-1]>200){
				flag=false;
				break;
			}
		}
		int fuel_used=1422-v[n-1];
		if(fuel_used*2>200){
			flag=false;
		}
		if(flag)
			cout<<"POSSIBLE\n";
		else
			cout<<"IMPOSSIBlE\n";
	}
	return 0;
}