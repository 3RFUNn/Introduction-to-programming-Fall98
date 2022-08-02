
 #include <stdio.h>
#include <math.h>
int main() {
    double x1,y1,x2,y2,x3,y3,x4,y4,x5,y5;
    double S1,S2,s1,s2,s3,s4;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf\n%lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&x5,&y5);
    S1= fabs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
    S2= fabs((x3*(y4-y1)+x4*(y1-y3)+x1*(y3-y4)));
    s1= fabs((x1*(y2-y5)+x2*(y5-y1)+x5*(y1-y2)));
    s2= fabs((x2*(y3-y5)+x3*(y5-y2)+x5*(y2-y3)));
    s3= fabs((x3*(y4-y5)+x4*(y5-y3)+x5*(y3-y4)));
    s4= fabs((x1*(y4-y5)+x4*(y5-y1)+x5*(y1-y4)));
    if(fabs(((s1+s2+s3+s4)-(S1+S2))<0.001))
        printf("Yes");
    else 
        printf("No");
    return 0;
}