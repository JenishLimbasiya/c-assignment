#include<stdio.h>
int main()
{
	int year;
	  
    printf("enter the the year : ");
    scanf("%d",&year);
    
    if(year%400==0)
    {
    	printf("year is the century year....");
    	
	}
	
	else
	{
		printf("year is not century year.....");
	}
    
}