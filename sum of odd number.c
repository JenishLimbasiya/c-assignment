#include<stdio.h>
int main()
{
	int x,first_number,second_number, sum=0;
	
	printf("enter the first number : ");
	scanf("%d",&first_number);
	
	printf("enter the second number : ");
	scanf("%d",&second_number);
	
	printf("even number %d and %d : ", first_number,second_number);
	
	for(x=first_number;x<=second_number;x++)
	{
		if(x%2!=0)
		{
			printf("%d ",x);
			sum=sum+x;
		}
	} 
	printf("\nsum of numberb = %d" ,sum);
	return 0;
}