#include<stdio.h>
int main()
{
	int arr1[2][2], arr2[2][2],subtraction[2][2];
	int row,col,xyz;
	
	printf("enter the first array elements : \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&arr1[row][col]);
		}
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",arr1[row][col]);
		} printf("\n");
	}  
	
	printf("\nenter the second array elements : \n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&arr2[row][col]);
		}
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",arr2[row][col]);
		} printf("\n");
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			subtraction[row][col]=0;
			
			for(xyz=0;xyz<2;xyz++)
			{
				subtraction[row][col]=subtraction[row][col]+arr1[row][xyz]+arr2[xyz][col];
			} 
		} printf("\n");
		
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",subtraction[row][col]);
		}printf("\n");
	}  
	
	  return 0;
	
}