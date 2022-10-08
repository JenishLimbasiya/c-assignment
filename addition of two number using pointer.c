#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	printf("enter the first number : ");
	scanf("%d",&a);
	
	printf("enter the second number : ");
	scanf("%d",&b);
	
	p=&a;
	q=&b;
	
	printf("sum is : %d",*p+*q);
	
	return 0;
}