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
const int MOD2 = 10000007;

int g[105][105];
int dp[105][105];
int n,m;

void print(int *g,int n,int m){
    int ans=0;
    for(int i=0;i<m;i++)
        ans=max(ans,dp[n-1][i]);
    cout<<ans<<endl;
}

int main(){
	boost;
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    	cin>>n>>m;
    	for(int i=0;i<n;i++)
    		for(int j=0;j<m;j++)
    			cin>>g[i][j];
    	for(int i=0;i<m;i++){
    		dp[0][i]=g[0][i];
    	}
    	for(int i=1;i<n;i++){
    		for(int j=0;j<m;j++){
    			int a=-1,b=-1,c=-1;
    			if(j>0) a = dp[i-1][j-1];
    			if(j<m-1) b = dp[i-1][j+1];
    			c = dp[i-1][j];
    			dp[i][j] = max(max(a,b),c) + g[i][j];
    		}
    	}
        print((int *)g,n,m);
    }
    return 0;
}	