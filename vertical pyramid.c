#include<stdio.h>
int main()
{
	int row,col,range,temp;
	
	printf("enter the range : ");
	scanf("%d",&range);
	
	for(row=1;row<=range;row++)
	{
		for(col=1;col<=range-row;col++)
		{
			printf(" ");
		}
		
		for(temp=1;temp<2*row;temp++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}