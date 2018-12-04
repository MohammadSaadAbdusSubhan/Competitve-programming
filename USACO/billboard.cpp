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

struct Rect {
  int x1, y1, x2, y2;
};
 
int area(Rect r){
  return (r.x2 - r.x1) * (r.y2 - r.y1);
}
 
int intersect_area(Rect p, Rect q){
  int x_overlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y_overlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  return x_overlap * y_overlap;
}
 
int main(void){
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  
  Rect a, b, t;  // billboards A & B, and the truck
 
  fin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  fin >> b.x1 >> b.y1 >> b.x2 >> b.y2; 
  fout << area(a) + area(b) - intersect_area(b,a)<< "\n";
 
  return 0;
}
