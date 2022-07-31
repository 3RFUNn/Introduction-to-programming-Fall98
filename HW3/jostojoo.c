#include <stdio.h>
int main()
{
int a,b,c,d;
float e;
double f;
scanf("%d\n%d\n%d\n%d\n%f\n%lf",&a,&b,&c,&d,&e,&f);
printf("%5d\n%05d\n%+d\n% -d\n%.0f\n%010.5lf\n",a,b,c,d,e,f);
    return 0;
}