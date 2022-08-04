#include <stdio.h>

int main() {
    int a,b,c,d=0;
    scanf("%d %d",&a,&b);
    for (int i=a; i<=b ; i++) {
        c=0;
        for (int j = 1; j<=i ; ++j) {
            if(i%j==0){
                c++;
            }


        }
        if(c==2){
            d++;
            if(d>1){
                printf(",");
            }
            printf("%d",i);
        }

    }
    return 0;
}