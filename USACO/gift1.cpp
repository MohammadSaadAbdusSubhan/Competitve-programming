/*
ID: mohd1231
PROG: gift1
LANG: C++                
*/
#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int a, b, c, d;
    fin >> a;
    int x[a];
    for(int i = 0; i<a; i++){
        x[i] = 0;
    }
    string np[a], z;
    for (int o = 0; o<a; o++){
        fin >> np[o];
    }
    for (int k = 0; k<a; k++){
        fin >> z;
        for(int j = 0; j<a; j++){
            if (np[j] == z){
                fin >> b >> c;
                if(c>0){
                    d = b/c;
                    string rec[c];
                    for (int g = 0; g<c; g++){
                        fin >> rec[g];
                        for(int h = 0; h<a; h++){
                            if (np[h] == rec[g]){
                                x[h] += d;
                                break;
                            }
                        }
                    }      
                x[j] -= b;
                x[j] += b%c;
                }
                break;
            }  
        }
    }
    for(int l =0; l<a; l++){
        fout << np[l] << " " << x[l] << endl;
    }
    return 0;
}