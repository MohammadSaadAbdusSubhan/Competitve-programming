#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int g,mg;
        cin>>g>>mg;
        int i,god[g],mech[mg];
        for(i=0;i<g;i++)
            cin>>god[i];
        for(i=0;i<mg;i++)
             cin>>mech[i];
        sort(god,god+g);
        sort(mech,mech+mg);
        if(god[g-1]>=mech[mg-1])
            cout<<"Godzilla\n";
        else
            cout<<"MechaGodzilla\n";
    }
    return 0;
}