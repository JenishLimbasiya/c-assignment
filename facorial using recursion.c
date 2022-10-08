#include<stdio.h>
int factorial(int n)
{
	if(n>1)
		{
		 return n*factorial(n-1);
		}
}
int main()
{
	int number;
	printf("enter the number : ");
	scanf("%d",&number);//5
	printf("factorial number is : %d",factorial(number));
	return 0;
}