#include <stdio.h>
int main()
{
	double a, b, c, d ;
	scanf("%lf %lf %lf %lf" , &a , &b , &c , &d );
	double sum = a + b + c + d;
	double avg = sum / 4;
	printf("average = %0.3lf\n",avg);
	return 0;  
}