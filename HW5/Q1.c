#include <stdio.h>

int main() {
    int n,m,max=0;
    scanf("%d",&n);
    for (int i= n; i>0 ; i/=10) {
        m = i % 10;
        if (m > max)
            max = m;
    }
    if(max==0)
        printf("ZERO");
    else if(max==1)
        printf("ONE");
    else if(max==2)
        printf("TWO");
    else if(max==3)
        printf("THREE");
    else if(max==4)
        printf("FOUR");
    else if(max==5)
        printf("FIVE");
    else if(max==6)
        printf("SIX");
    else if(max==7)
        printf("SEVEN");
    else if(max==8)
        printf("EIGHT");
    else if(max==9)
        printf("NINE");
    return 0;
}