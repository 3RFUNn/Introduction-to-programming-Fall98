#include <stdio.h>

int main() {
    int d,n,rooz;
    scanf("%d %d",&d,&n);
    rooz=(d+n)%7;
    if(rooz==0)
        printf("Friday");
    else if(rooz==1)
        printf("Saturday");
    else if(rooz==2)
        printf("Sunday");
    else if(rooz==3)
        printf("Monday");
    else if(rooz==4)
        printf("Tuesday");
    else if(rooz==5)
        printf("Wednesday");
    else if(rooz==6)
        printf("Thursday");
    return 0;
}