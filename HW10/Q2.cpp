#include <iostream>
using namespace std;
int main() {
    int n;
    char kalame1[100][100],kalame2[100][100];
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>kalame1[i];
        cin>>kalame2[i];
    }
    cout<<endl;
    for (int j = 0; j <n ; ++j) {
        int komaki=0;
        int i;
        for ( i = 0; kalame1[j][i]!='\0' && komaki==0; ++i) {
            for (int k = 0; kalame2[j][k]!='\0' && komaki==0 ; ++k) {

                if (kalame1[j][i]==kalame2[j][k]) {
                    cout << "YES" << endl;
                    komaki++;
                    break;
                }

            }

        }
        if(komaki==0 && kalame1[j][i]=='\0'){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
