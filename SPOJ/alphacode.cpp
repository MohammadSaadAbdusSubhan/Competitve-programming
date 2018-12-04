#include <iostream>
#include <string>
using namespace std;
unsigned long long dp[50007];
int main(){
	string s;
	while(true){
		dp[0]=1;
		dp[1]=1;
		cin>>s;
		if(s[0]=='0')
			break;
		for(int i=2;i<=s.size();i++)
			dp[i]=0;
		for(int i=1;i<s.size();i++){
			if(s[i]!='0' && s[i-1]!='0' && s[i+1]!='0' && (s[i]-'0')+(s[i-1]-'0')*10<=26)
				dp[i+1]=dp[i]+dp[i-1];
			else
				dp[i+1]=dp[i];
		}
		cout<<dp[s.size()]<<endl;
	}
	return 0;
}