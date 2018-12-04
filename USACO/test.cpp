/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: your_id_here
TASK: test
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);
    int a, b;
    cin >> a >> b;
    cout << a+b << endl;
    return 0;
}
