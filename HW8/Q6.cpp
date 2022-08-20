#include <cstdio>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    long int n,bala,payin;
    cin >> n >> payin >> bala;
    long int araye[n];
    for ( int i = 0; i <n ; ++i) {
        cin>>araye[i];
    }
    sort(araye, araye+n);
    for (int j = 0; j <n ; ++j) {
        if(araye[j]<=bala && araye[j]>=payin){
            printf("%ld ",araye[j]);
        }
    }
    return 0;
}

