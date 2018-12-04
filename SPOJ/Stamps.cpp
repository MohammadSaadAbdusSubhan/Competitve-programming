#include<bits/stdc++.h>
using namespace std;
int amount[1000];
int main(){
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
		long borrow;
		int friends;
		cin>>borrow>>friends;
		for(int i=0;i<friends;i++)
			cin>>amount[i];
		sort(amount,amount+friends);
		int required=0,count=0;
		for(int i=friends-1;i>=0;i--){
			if(borrow>required){
				required+=amount[i];
				count++;
			}
		}
		if(borrow>required)
			cout<<"Scenario #"<<j<<":\n"<<"impossible\n";
		else
			cout<<"Scenario #"<<j<<":\n"<<count<<endl;
	}
	return 0;
}