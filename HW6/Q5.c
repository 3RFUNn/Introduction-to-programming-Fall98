#include <stdio.h>
void olguyabi(){
    int a,j=0;
    scanf("%d",&a);
    while(a>0){
        if((a & 7)==5){
            j++;
        }
        a=a>>1;
    }
    printf("%d",j);
}

int main() {
    olguyabi();
    return 0;
}