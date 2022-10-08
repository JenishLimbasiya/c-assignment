#include<stdio.h>
int main()
{
	int base, area, hight;
	
	printf("enter the base : ");
	scanf("%d",&base);
	
	printf("enter the hight : ");
	scanf("%d",&hight);
	
	area=(base*hight)/2;
	printf("area of triangle is : %d",area);
	
	return 0;
}