#include<stdio.h>
int main()
{
	int a[5]={32,78,45,97,3};
	int x,max=a[0];//32
	
	for(x=0;x<5;x++)//0 1 2 3 4
	{
		if(max<a[x])//97<3 
		{
			max=a[x];
			
		}
	}
	 printf("%d",max);//97
	 
	 return 0;
}