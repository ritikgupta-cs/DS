 #include <stdio.h>
#include <math.h>
int main ()
{
	float x,y,z,ci;
	printf("ENTER PRINCIPLE AMOUNT: ");
	scanf("%f",&x);
	printf("\nENTER RATE: ");
	 scanf("%f",&y);
	 printf("\nENTER TIME: ");
    scanf("%f",&z);
    ci= x*pow((1+y/100),z);
    printf("COMPOUND INTEREST IS =%f", ci);
    return 0;
}
