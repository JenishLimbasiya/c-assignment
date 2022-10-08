#include<stdio.h>
int main()
{
	int row,colum;
	    for(row=1;row<=5;row++)
	{
		for(colum=1;colum<=row;colum++) 
		{
				printf("%d",colum);	
		}   	
		
		printf("\n");
		
	}	
	
        return 0;
}