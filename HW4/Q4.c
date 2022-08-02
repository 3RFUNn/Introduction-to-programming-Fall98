#include <stdio.h>

int main() {
    double w;
    double h,bmi;
    scanf("%lf %lf",&w,&h);
    bmi=w/(h*h);
    printf("%.2lf\n",bmi);
    if(bmi<18.5)
        printf("UnderWeight");
    else if(bmi>=18.5 && bmi<25)
        printf("Normal");
    else if(bmi>=25 && bmi<30)
        printf("OverWeight");
    else if(bmi>=30)
        printf("Obese");

    return 0;
}