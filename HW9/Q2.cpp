#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int r,c,y;
    cin>>r>>c;
    int matris2[r][c];
    int** matris;
    matris = new int*[r];
    for (int i = 0; i <r ; ++i) {
        matris[i]=new int[c];
        for (int j = 0; j <c ; ++j) {
            cin>>matris[i][j];
        }
    }
    for (int k = 0; k <r ; ++k) {
        for (int i = 0; i <c ; ++i) {
            cin>>y;
            matris[k][i]+=y;
        }

    }
    for (int l = 0; l <r ; ++l) {
        for (int i = 0; i <c ; ++i) {
            cout<<matris[l][i]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}