#include<stdio.h>
int main()
{
	int number,i,num=0;
	printf("enter the number : ");
	scanf("%d",&number);
	
	for(i=1;i<=100;i++)
	{
	  if(number%i==0)
	  {
	  	num++;
	  }
	}
	if(num==2)
    { 
      	printf("prime number");
	}
	else
	{
		printf("not prime number");
	}
	return 0;
}