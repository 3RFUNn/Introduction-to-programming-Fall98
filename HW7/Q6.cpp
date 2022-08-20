
// code nawbi vase c++ tedad masir
#include <cmath>
#include <cstdio>
using namespace std;
unsigned  long long int waze_tedad(int A, int B)

{
    if (B==A||B==0) //jaygashti tor
        return 1;
    return ((waze_tedad(A - 1, B-1)*(A))/B);//shikundane jaygasht
}

int main()
{
    long int tool,arz;

    scanf("%ld%ld",&tool,&arz);

    printf("%lld",waze_tedad(tool+arz,tool));

    return 0;
}
