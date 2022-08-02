#include <stdio.h>

int main() {
    double a1,b1,a2,b2,a3,b3,a4,b4;
    scanf("%lf %lf\n%lf %lf\n%lf %lf\n%lf %lf",&a1,&b1,&a2,&b2,&a3,&b3,&a4,&b4);
    printf((b4 - b3) * (b2 - b1) == (a4 - a3) * (a2 - a1) * -1 ? "Yes" : "No");
    return 0;
}