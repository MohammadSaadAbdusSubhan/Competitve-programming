#include<bits/stdc++.h>
using namespace std;
int main(){
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long a[n];
        for(long i=0;i<n;i++)
            cin>>a[i];
        long inv_count = 0;
        for (long i=0;i<n-1;i++) 
            for (long j=i+1;j<n;j++) 
                if (a[i]>a[j]) 
                    inv_count++; 
        cout<<inv_count<<endl;
    }
    return 0;
}