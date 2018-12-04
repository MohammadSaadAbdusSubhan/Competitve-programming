/*
ID: mohd1231
PROG: ride
LANG: C++                 
*/
    #include <cstdio>
    char a[7], b[7];
    int f(char*s) {
        return *s ? (*s-64) * f(s+1) % 47 : 1;
    }
    int main() {
        freopen("ride.in", "r", stdin);
        freopen("ride.out", "w", stdout);
        scanf("%s%s", a, b);
        puts(f(a)-f(b) ? "STAY" : "GO");
    }
