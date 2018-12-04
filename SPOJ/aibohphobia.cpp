#include<bits/stdc++.h>
using namespace std;
int lcs(string s,string S,int x,int y){
	int dp[x+1][y+1];
	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
			if(i==0||j==0)
				dp[i][j]=0;
			else if(s[i-1]==S[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[x][y];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string S(s);
		reverse(S.begin(),S.end());
		cout<<s.size()-lcs(s,S,s.size(),S.size())<<endl;
	}
	return 0;
}