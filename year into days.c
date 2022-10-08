#include<stdio.h>
int main()
{
	float year,days;
	printf("enter the year : ");
	scanf("%f",&year);
	
	days=year*365.2425;
	printf("days is : %f",days);
}