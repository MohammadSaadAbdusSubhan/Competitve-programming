#include<bits/stdc++.h>
using namespace std;
int editdistance(string s1,string s2,int x,int y){
	int dp[y+1][x+1];
	for(int i=0;i<=y;i++){
		for(int j=0;j<=x;j++){
			if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
		}
	}
	return dp[y][x];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1;
		cin>>s2;
		cout<<editdistance(s1,s2,s1.size(),s2.size())<<endl;
	}
	return 0;
}