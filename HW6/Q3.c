#include <stdio.h>
#include <math.h>

void clean(){
    int x1,x2,x3,y1,y2,y3;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    int a=pow(x2-x1,2)+pow(y2-y1,2);
    int b=pow(x3-x1,2)+pow(y3-y1,2);
    int c=pow(x3-x2,2)+pow(y3-y2,2);
    if(a==b+c || b==a+c || c==a+b)
        printf("%d ",1);
    else
        printf("%d ",0);
    if(a==b || a==c || b==c)
        printf("%d",1);
    else
        printf("%d",0);
    return ;
}
int main() {
    clean();
    return 0;
}