#include<stdio.h>
#include <math.h>
//ekhtesasi erfan rafiee
int hooshmand(int adad, int tavan, int peymane)
{

    if (adad == 0)
        return 0;
    if (tavan==0 && peymane==1)
        return 0;
    if (tavan==0 )
        return 1;

    // tavan fard
    long z;
    if (tavan%2==1) {
        z = adad % peymane;
        z = (z * hooshmand(adad, tavan-1, peymane) % peymane) % peymane;

    }

        // tavan zoj
    else {
        z= hooshmand(adad, tavan/2, peymane);
        z = (z * z) % peymane;
    }

    return ((int)(z + peymane) % peymane);
}


int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d", hooshmand(a, b, c));
    return 0;
}

