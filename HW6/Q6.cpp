#include <iostream>
#include <cmath>
using namespace std;
void swap(double &a, double &b){
    a= a + b;
    b = a - b;
    a = a - b;
}
void sort(double &a, double &b, double &c){
    if(b>a)
        swap(b,a);
    if(c>a)
        swap(c,a);
    if(c>b)
        swap(c,b);
}

void rond(double &a){
    if(fmod(a,1)>0.3000001) {
        a=floor(a);
        a += 1;
        int b=a;
    } else{
        a=floor(a);
        int b=a;
    }
}
int main() {
    double a,b,c;
    cin>>a>>b>>c;
    sort(a,b,c);
    rond(a);
    rond(b);
    rond(c);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;




    return 0;
}