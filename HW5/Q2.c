#include <stdio.h>
#include <math.h>

int main(void) {
    int a;
    long long int f=0;
    scanf("%d",&a);
    for (int i = 0; i < a ; ++i) {
        int m = pow(-1, i );
        long long n;
        n = pow(10, i + 1);
        long long int s = m * (n - 1);
        f += s;

    }
    printf("%lld",f);

    return 0;
}