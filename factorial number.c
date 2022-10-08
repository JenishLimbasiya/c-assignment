#include<stdio.h>
int main()
{
   double factorial=1;
   int  x, number;
	printf("enter any number : ");
	scanf("%d",&number);
	
	for(x=1;x<=number;x++)
    {
    factorial=factorial*x;
	}
	printf("%lf",factorial);
	
	return 0;
}