#include<stdio.h>

int factorial()
{
	int x,number,factorial=1;
	printf("enter the number : ");
	scanf("%d",&number);
	
	for(x=1;x<=number;x++)
	{
		
		factorial=factorial*x;
		
	}
	printf("factorial number is : %d",factorial);
}


int main()
{
	factorial();
	return 0;
}
