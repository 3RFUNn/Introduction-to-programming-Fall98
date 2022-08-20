#include <stdio.h>
int amalgar_BMM(int A, int B)//code e ekhtesasi erfan rafiee
{
    while (A!=B)
    {
        if (A>B){
            return amalgar_BMM(A - B, B);
        }
        else{
            return amalgar_BMM(A, B - A);
        }
    }
    return A;
}

int main() {
    int adad1,adad2;
    scanf("%d%d",&adad1,&adad2);
    printf("%d",amalgar_BMM(adad1,adad2));


    return 0;
}
