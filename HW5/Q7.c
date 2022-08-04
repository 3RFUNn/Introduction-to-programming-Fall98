#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,c=0,d=0,e=0;
    scanf("%d",&a);
    for (int i = 2; i <=a ; ++i) {
        if(e>0){
            printf("*");
        }
        e=0;
        c=0;
        d=0;
        for (int j = 1; j <=i ; ++j) {
            if(i%j==0){
                c++;
            }

        }
        if(c==2){
            while(a%i==0){
                a=a/i;
                d++;
            }
            if(d>1) {
                printf("%d^%d", i, d);
                e++;
            }
            if(d==1){
                printf("%d",i);
                e++;
            }
        }
    }
    return 0;
}