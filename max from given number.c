#include<stdio.h>
int main()
{
	int number,reminder,max_number=0;
	printf("enter any number : ");//465
	scanf("%d",&number);
	
	while(number>0)//465>0 
	{
		reminder=number%10;//5 6 4
		if(reminder>max_number)//5>0 6>5 4>6
		
		{  
		   max_number=reminder;//5 6
		}
		
		number=number/10;//46 4 0
	}
	printf("max number is : %d",max_number);//6
	
	return 0;
}