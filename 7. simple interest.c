#include <stdio.h>
int main ()
{
	int x,y,z;
	printf("ENTER PRINCIPLE AMOUNT: ");
	scanf("%d",&x);
	printf("\nENTER RATE: ");
	 scanf("%d",&y);
	 printf("\nENTER TIME: ");
    scanf("%d",&z);
    printf("SIMPLE INTEREST IS =%d",x*y*z/100);
    return 0;
}
