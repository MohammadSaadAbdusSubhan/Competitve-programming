/*
ID: mohammadsaad
LANG: C++11
PROB: task
*/
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	freopen("marathon.in","r",stdin);
	freopen("marathon.out","w",stdout);
	int n,x[n],y[n];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	int totaldistance=0;
	for(int i=1;i<n;i++)
		totaldistance+=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
	int largestskip=0;
	for(int i=1;i<n-1;i++){
	  	int noskipdistance = abs(x[i+1] - x[i]) + abs(x[i] - x[i-1]) + abs(y[i+1] - y[i]) + abs(y[i] - y[i-1]);
      		int skipdistance = abs(x[i+1] - x[i-1]) + abs(y[i+1] - y[i-1]);
      		largestskip = max(largestskip, noskipdistance - skipdistance);
	}
	cout<<totaldistance-largestskip;
	return 0;
}
