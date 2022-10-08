#include<stdio.h>
#include<math.h>
int main()
{
	
	float principle,rate, time,ci, amount;
	printf("enter principle amount : ");
	scanf("%f",&principle);
	
	printf("enter time : ");
	scanf("%f",&time);
	
	printf("enter rate : ");
	scanf("%f",&rate);
	
	amount=principle * (pow(( 1 + rate/100), time));
	ci=amount-principle;
	
	printf("\nFuture Compound Interest is = %.2f",amount);
    printf("\nCompound Interest is = %.2f", ci);
	
	return 0;
	
}