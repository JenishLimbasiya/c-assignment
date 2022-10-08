#include<stdio.h>
int main()
{
	int row,colum,x=1;
	    for(row=1;row<=5;row++)
	{
		for(colum=1;colum<=row;colum++) 
		{
				printf("%d",x++);	
		}   	
		
		printf("\n");
		
	}	
	
        return 0;
}