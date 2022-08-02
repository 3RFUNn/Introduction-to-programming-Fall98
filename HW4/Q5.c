#include <math.h>
#include <stdio.h>

int main() {
    int x1,y1,r1,x2,y2,r2,i;
    scanf("%d %d %d\n%d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
    i=abs(r1-r2);
    double w=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(w>r1+r2)
        printf("0");
    else if(w==r1+r2)
        printf("1");
    else if(w<=r1+r2 && w>i)
        printf("2");
    else if(w==i)
        printf("1");
    else if(w<i && w>=0)
        printf("0");

    return 0;
}

