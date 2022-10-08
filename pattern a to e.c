#include<stdio.h>
int main()
{
	int row,colum;
	    for(row='A';row<='E';row++)
	{
		for(colum='A';colum<=row;colum++) 
		{
				printf("%c ",colum);	
		}   	
		
		printf("\n");
		
	}	
	
        return 0;
}