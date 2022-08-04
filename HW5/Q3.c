#include <stdio.h>
#include <math.h>
int main() {
    int n,a=0,b=0,c=0,d=0;
    scanf("%d", &n);
    int adad = n;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            c=c+1;
        }
        else if (n%2==0)
        {
            b=b+((n%10)*pow(10,a));
            a++;
        }
        n=n/10;
        d++;
    }
    if (c!=d && adad==0)
    {
        printf("%d",0);
    }
    if (c==d)
    {
        printf("All digits were deleted");
    }
    else
    {
        printf("%d",b);
    }
    return 0;
}