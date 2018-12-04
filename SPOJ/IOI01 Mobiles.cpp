#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int s,type;
	int x,y,a,l,b,r,t;
	bool flag=true;
	cin>>type;
	if(type==0)
		cin>>s;
	long long int matrix[s][s];
	memset(matrix, 0, sizeof(matrix[0][0]) * s * s);
	long long int sum=0;
	while(flag){
		cin>>type;
		if(type==1){
			cin>>x>>y>>a;
			matrix[x][y]+=a;
		}
		else if(type==2){
			sum=0;
			cin>>l>>b>>r>>t;
			for(int i=l;i<=r;i++)
				for(int j=b;j<=t;j++)
					sum+=matrix[i][j];
			cout<<sum<<endl;
		}
		else
			flag=false;
	}
	return 0;
}