#include <stdio.h>
int main()
{
	float r,h;
	printf("ENTER RADIUS: ");
	scanf("%f",&r);
	printf("ENTER HEIGHT: ");
	scanf("%f",&h);
	printf("surface area of sphere is= %f",4*3.14*r*r);
    printf("\nvolume of cone= %f", (3,14*r*r*h)/3);
}
