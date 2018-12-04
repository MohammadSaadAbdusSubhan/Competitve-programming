#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define bit __builtin_popcountll
#define sqr(x) (x) * (x)
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1000000007;

int main(){
	boost;
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    bool flag=true;
 	while(true){
 		cin>>n;
 		if(n==0)
 			break;
 		string s;
 		cin>>s;
 		int m=s.size()/n;
 		char matrix[m][n];
 		int k=0;
 		for(int i=0;i<m;i++){
 			if(i%2==0){
 				for(int j=0;j<n;j++)
 					matrix[i][j]=s[k++];
 			}
 			else{
 				for(int j=n-1;j>=0;j--)
 					matrix[i][j]=s[k++];
 			}
 		}
 		for(int i=0;i<n;i++){
 			for(int j=0;j<m;j++){
 				cout<<matrix[j][i];
 			}
 		}
 		cout<<endl;
 	}
 	return 0;   
}