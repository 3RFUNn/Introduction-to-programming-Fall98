#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    int i=0;
    int j=0;
    scanf("%d %d %d %d %d ", &a,&b,&c,&d,&e);
    int value = a%2==0 ? i++ : j++;
    int value1= b%2==0 ? i++ : j++;
    int value2= c%2==0 ? i++ : j++;
    int value3= d%2==0 ? i++ : j++;
    int value4= e%2==0 ? i++ : j++;
    printf("%d %d\n",i,j);
    return 0;
}