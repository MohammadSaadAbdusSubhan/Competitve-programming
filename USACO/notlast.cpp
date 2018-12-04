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


int mini(int a[],int n){
      int min = 10000;
      for(int i = 0; i < 7; i++){
            if(a[i] < min){
                  min  = a[i];
            }
      }
      return min;
}
void cow(int i){
      if(i == 0){
             printf("Bessie\n" );
      }else if(i == 1){
            printf("Elsie\n");
      }else if(i == 2){
            printf("Daisy\n");
      }else if(i == 3){
            printf("Gertie\n");
      }else if(i == 4){
            printf("Annabelle\n");
      }else if(i == 5){
            printf("Maggie\n");
      }else if(i == 6){
            printf("Tie\n");
      }else{
            printf("Henrietta\n");
      }
}
int cownumber(char b[]){
      if(b[0] == 'B'){
            return 0;
      }else if(b[0] == 'E'){
            return 1;
      }else if(b[0] == 'D'){
            return 2;
      }else if(b[0] == 'G'){
            return 3;
      }else if(b[0] == 'A'){
            return 4;
      }else if(b[0] == 'M'){
            return 5;
      }else{
            return 6;
      }
}
int main(void){
	freopen("notlast.in","r",stdin);
	freopen("notlast.out","w",stdout);
      int n;
      scanf("%i",&n);
      int a[7];
      char b[10000];
      int answer;
      for(int i = 1; i <= n; i++){
            scanf("%s",b);
            int add;
            scanf("%i",&add);
            a[cownumber(b)] += add;
      }
     
      int second_min = 100000;
      int min = mini(a,n);
      for(int i = 0; i < 7; i++){
            if(a[i] - min<= second_min && a[i] != min){
                  if(a[i] - min == second_min){
                        answer = 6;
                  }else{
                        answer = i;
                  }
                  second_min = a[i] - min;
            }
      }
      cow(answer);
}
