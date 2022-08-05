#include <stdio.h>
#include <math.h>

void aghrabe(){
    int saat,daghighe,c,d;
    scanf("%d%d",&saat,&daghighe);
    c=daghighe/60;
    d=daghighe%60;
    float e=d;
    saat+=c;
    saat*=5;
    float saat2=saat;
    saat2+=e/12;
    if(saat2>=60)
        saat2-=60;
    float daraje=fabsf(saat2-d)*6;
    if(daraje>=180)
        daraje=360-daraje;
    printf("%.2f",daraje);
}
int main() {
    aghrabe();
    return 0;
}