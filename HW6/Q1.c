#include <stdio.h>
#include <math.h>
void rooz(){
      int static a,i=0,j=0,c;
    do{
        i=0;
        scanf("%d", &a);
        c=a;
        if(a!=0){
            j++;
            do {
                a = a / 2;
                i++;
            }while(a>0);
            if(j<3) {
                int b=pow(2,i-1);
                printf("%d ", b);
            }
            else
                printf("%d ",-1);
        }

    }while(c!=0);
    if(a==0){
        printf(" ");
    }

}
int main() {
    rooz();
    return 0;
}