#include<stdio.h>
int main()
{
	float principal_amount, annual_intrest, time, simple_intrest;
	printf("enter the principle amount :");
	scanf("%f" , &principal_amount);
	printf("enter the intrest amount :");
	scanf("%f",& annual_intrest);
	printf("enter the time duration :");
	scanf("%f",&time);
	
	
	simple_intrest= (principal_amount*annual_intrest*time)/100;
	printf("simple intrest : %.2f",simple_intrest);
	
}
