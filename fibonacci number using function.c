#include<stdio.h>
int fibonaccinumber()
{
	int number, x,a=0,b=1,c;
	printf("enter the number : ");
	scanf("%d",&number);
	
	for(x=0;x<=number;x++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}

}

int main()
{
	fibonaccinumber();
	return 0;

}