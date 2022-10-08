#include<stdio.h>
int main()
{
	int a[5]= {23,0,98,234,24};
	int x,max=a[0],seclarg=a[0];
	
	for(x=0;x<5;x++)
	{
		if(max<a[x])
		{
			max = a[x]; 
		}
	}
		printf("max number is : %d",max);
		
		
	
		for(x=0;x<5;x++)
	{
		if	(seclarg<a[x]&&a[x]!=max)
		{
			seclarg = a[x]; 
		}
	}
		printf("\nsecond max number is : %d",seclarg);
	
	return 0;
}