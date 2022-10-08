#include<stdio.h>
int main()
{
	int number,x,a=0,b=1,c;
	printf("enter any number : ");
	scanf("%d",&number);
	
	for(x=0;x<=number;x++)
	{   printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	   
	}
	return 0;
}