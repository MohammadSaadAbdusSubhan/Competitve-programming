#include <bits/stdc++.h> 
using namespace std; 
void SieveOfEratosthenes(long long int m,long long int n){ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for (long long int p=2; p<=sqrt(n); p++){ 
        if (prime[p] == true){
            for (long long int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (long long int p=m; p<=n; p++){
        if(p==1)
            continue;
        if (prime[p])
            cout<<p<<endl;
    }
} 
int main(){ 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	long long int m,n;
    	cin>>m>>n;
    	SieveOfEratosthenes(m,n);
    	cout<<endl;
    }
    return 0; 
} 