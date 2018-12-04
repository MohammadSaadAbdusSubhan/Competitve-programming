#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    long long t,n,s,*a,i;
    cin>>t;
    cout<<endl;
    while(t--){
        cin>>n;
        a= new (nothrow)long long[n];
        s=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            s=(s+a[i])%n;
        }
        if(s%n==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}