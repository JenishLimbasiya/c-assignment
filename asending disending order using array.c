#include<stdio.h>
int main()
{
	int a[5],i,b,j;
	
	printf("enter the array elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
				
			}
			
		}
		
		printf("\n%d",a[i]);
   }
   return 0;
}