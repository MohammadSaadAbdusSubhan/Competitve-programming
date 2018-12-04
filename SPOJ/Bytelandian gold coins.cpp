#include<bits/stdc++.h>
using namespace std;
map<int,long long int> dp;
long long solve(long long int n){
	if(n<12)
		return n;
	if(dp.count(n))
		return dp[n];
	dp[n]=solve(n/2)+solve(n/3)+solve(n/4);
	return dp[n];
}
int main(){
	long long int n;
	while(scanf("%lld",&n)==1)
		printf("%lld\n",solve(n));
	return 0;
}