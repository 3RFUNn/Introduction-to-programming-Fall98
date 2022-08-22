#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char kalame[n];
    cin >> kalame;
    int d=0;
    char max=kalame[0];
    for (int i = 0; i < n; ++i) {
        if (kalame[i + 1] > max) {
            max=kalame[i+1];
            d=(i+1);
        }
    }
    for (int j = 0; j <n ; ++j) {
        if(j==d){
            continue;
        }
        cout<<kalame[j];
    }

    return 0;
}