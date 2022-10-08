#include<stdio.h>
int main()
{
	int  number,lastdigit,firstdigit,sum;
	printf("enter the number : ");
	scanf("%d",&number);//123
	
	lastdigit=number%10;
	
	while(number>=10)
	{
		number=number/10;
	}
	
	   firstdigit=number;
	   sum=lastdigit+firstdigit;
	   printf("first and last digit number sum is : %d",sum);
	   return 0;
}