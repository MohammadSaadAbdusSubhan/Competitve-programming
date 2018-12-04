#include<bits/stdc++.h>  
using namespace std; 
int lis( int arr[], int n ){  
    int lis[n]; 
    lis[0] = 1;    
    for (int i = 1; i < n; i++ ){ 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
   int maxv=lis[0];
   for(int i=1; i<size ; ++i)
      if(maxv<lis[i])
         maxv=lis[i];
   return maxv;
}
int main(){
    int n,a[n];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<lis(a,n)<<endl;
    return 0;
}
