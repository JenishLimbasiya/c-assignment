#include<stdio.h>
int main()
{
	int number,rem,sum=0; 
	number=number;//123
	
	printf("enter the numer : ");
	scanf("%d",&number);
	
	while(number!=0) 
	{
		rem = number%10;//123%10=3	12%10=2	, 1%10=1
		sum = sum+rem;//0+3=3 ,3+2=5 , 5+1=6		
		number=number/10; //123/10=12 , 12/10=1
	}	
	printf("%d",sum);//6
	
	return 0;
	
	}
	

	
