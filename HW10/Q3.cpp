#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char kalame[n][2000];
    cout<<endl;
    for (int i = 0; i <n ; ++i) {
        cin>>kalame[i];
    }
    for (int j = 0; j <n ; ++j) {
        int andaze=0;
        for (int i = 0; kalame[j][i]!='\0' ; ++i) {
            andaze++;
        }
        if(andaze>10){
            cout<<kalame[j][0]<<andaze-2<<kalame[j][andaze-1]<<endl;
        }
        if (andaze<=10){
            cout<<kalame[j]<<endl;
        }

    }

    return 0;
}
