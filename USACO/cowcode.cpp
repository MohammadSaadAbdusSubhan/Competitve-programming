/*
ID: mohd1231
PROG: cowcode
LANG: C++11
*/
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

char solve(string s,long long index){
	if(index<s.size())
		return s[index];
	long long length = s.size();
	while (2 * length <= index)
		length*=2;
	if(length==index)
		return solve(s,index-1); 
	return solve(s,index-length-1);
}
int main(){
	boost;
	#ifndef ONLINE_JUDGE
    freopen("cowcode.in","r",stdin);
    freopen("cowcode.out","w",stdout);
    #endif
    string s;
    long long index;
    cin>>s>>index;
    cout<<solve(s,index-1);
    return 0;
}	