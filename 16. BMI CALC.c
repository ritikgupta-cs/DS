#include <stdio.h>
int main()
{
	float a,b,c;
	printf("ENTER YOUR BODY WEIGHT in kg: ");
	scanf("%f",&a);
	printf("ENTER YOUR HEIGHT IN METER: ");
	scanf("%f",&b);
	c=a/(b*b);
	printf("YOUR BMI IS: %.2f\n" ,c);
	if (c<=18.5){
		
	    printf("YOU ARE UNDERWEIGHT");	
	}
	
	else if (c>=18.5&& c<24.9){
		printf("YOU ARE HEALTHY");
	}
	
	else{
		printf("you aare obese");
	}
	 
	return 0;
}
