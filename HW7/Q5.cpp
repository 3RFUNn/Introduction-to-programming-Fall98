#include <iostream>
using namespace std;
void HANOI(int tedad_disk,char AZ,char komak,char BE){
    if(tedad_disk==1) {
        cout << AZ << "->" << BE << endl;
    }
    else{
        HANOI(tedad_disk-1,AZ,BE,komak);

        cout<< AZ <<"->" << BE << endl;

        HANOI(tedad_disk-1,komak,AZ,BE);
    }
}
void SPECIAL_HANOI(int tedad_disk,char AZ,char komak,char BE){
    if(tedad_disk==2){
        cout << AZ << "->" << BE << endl;
        cout << komak << "->" << BE << endl;

    }
    else {
        SPECIAL_HANOI(tedad_disk-2,AZ,komak,BE);
        HANOI(tedad_disk-2,BE,AZ,komak);
        cout << AZ << "->" << BE << endl;
        HANOI(tedad_disk-1,komak,AZ,BE);
    }
}
int main() {
int S;
cin >> S;
SPECIAL_HANOI(S,'A','B','C');

    return 0;
}
