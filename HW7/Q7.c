#include <stdio.h>
long long int block(int n,int m){
    if(m>n)
        return 1;
    if(m==n)
        return 2;
    long long int d=0;
    for (int i = m; i <=n ; ++i) {
        d+=block(n-i-1,m);
    }
    d+=block(n-1,m);
    return d;
}

int main() {
    int siah,ghermez;
    scanf("%d%d",&siah,&ghermez);
    if(ghermez==0){
        ghermez++;
    }
    printf("%lld",block(siah,ghermez));
    return 0;
}
