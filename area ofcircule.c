#include<stdio.h>
int main()
{
	int r;
	float pi=3.14, area;
	printf("enter the radious of circule : ");
	scanf("%d",&r);
	
	area=pi*r*r;
	printf("area of circle is : %.2f",area);
	return 0;
	
}