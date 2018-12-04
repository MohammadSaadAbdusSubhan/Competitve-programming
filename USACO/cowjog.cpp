/*
ID: mohammadsaad
LANG: C++11
PROB: cowjog
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("cowjog.in","r",stdin);
	freopen("cowjog.out","w",stdout);
	ll n;
  	scanf("%lld", &n);
  	vector<ll> S;
  	for(ll i=0; i<n; i++) {
    	ll x, s;
    	scanf("%lld %lld\n", &x, &s);
    	S.push_back(s);
  	}
  	ll ans = 1;
  	ll slow = S[n-1];
  	for(ll i=n-2; i>=0; i--){
    	if(S[i] > slow){
      	// cows group up
    	} else{
      		ans++;
    	}
    	slow = min(slow, S[i]);
  	}
  	printf("%lld\n", ans);
}
