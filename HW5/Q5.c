#include <stdio.h>

int main() {
    int n,m,a,b,c=0,d;
    scanf("%d%d",&n,&m);
    d=n;
    do {
        a = n / m;
        b = n % m;
        c = a + b;
        d += a;
        n = c;
    }while(a>0);
    printf("%d",d);
    return 0;
}