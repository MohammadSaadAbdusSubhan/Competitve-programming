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

int n,x[1000],passto[1000];
int target(int i){
  	int left_nbr=-1, left_dist = 1000;
  	int right_nbr=-1, right_dist = 1000;                                                                                                     
  	for (int j=0; j<n; j++)
    	if (x[j] < x[i] && x[i]-x[j] < left_dist){ 
    		left_nbr = j; 
    		left_dist = x[i]-x[j]; 
    	}
	for (int j=0; j<n; j++)
    	if (x[j] > x[i] && x[j]-x[i] < right_dist){ 
    		right_nbr = j; 
    		right_dist = x[j]-x[i]; 
    	}
  	if (left_dist <= right_dist) 
  		return left_nbr;
  	return right_nbr;
}

int main(){
	boost;
	#ifndef ONLINE_JUDGE
    freopen("hoofball.in","r",stdin);
    freopen("hoofball.out","w",stdout);
    #endif
	cin>>n;
	for(int i=0;i<n;i++) cin>>x[i];
	for(int i=0;i<n;i++) passto[target(i)]++;
	int ans=0;
	for(int i=0;i<n;i++){
		if(passto[i]==0) ans++;
		if (i < target(i) && target(target(i))==i && passto[i]==1 && passto[target(i)]==1)
			ans++;
	}
	cout<<ans;
	return 0;
}	
