#include<bits/stdc++.h>
#define LL long long int
#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define w(t) while(t--)
#define f(i,n) for(i=0;i<n;i++)
#define fd(i,n) for(i=n-1;i>=0;i--)
#define p(a) printf("%d",a)
#define pl(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define ent printf("\n")
#define mod 1000000007
#define PI 3.14159265
#define gs getline(cin,s)
#define pb push_back
#define mp make_pair
#define INF 1e18
 
using namespace std;
 
LL arr[1000005];
LL dp[1000005];
 
int main(){
	LL t,n,i,m=1;
	sl(t);
	w(t){
		sl(n);
		f(i,n)
		sl(arr[i]);
		dp[0]=arr[0];
		dp[1]=max(arr[0],arr[1]);
		for(i=2;i<n;i++)
			dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
		cout<<"Case "<<m<<": "<<dp[n-1]<<endl;
		m++;
	}
	return 0;
}