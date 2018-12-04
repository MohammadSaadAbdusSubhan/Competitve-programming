#include<bits/stdc++.h>
using namespace std;
int main(){
	while(100000){
		float c;
		int n=0;
		cin>>c;
		if(c==0.00)
			exit(0);
		float sum=0.00;
		while(sum<c){
			n++;
			sum+=1.00/(1.00+n);
		}
		cout<<n<<" card(s)\n";
	}
	return 0;
}