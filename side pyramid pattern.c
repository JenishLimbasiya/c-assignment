#include<stdio.h>
int main()
{
	int row,colum;
	for(row=1;row<=8;row++)
	{
		for(colum=1;colum<=row;colum++)
		{
			printf(" *");
		}printf("\n");
	}
	
	for(row=7;row>=1;row--)
	{
		for(colum=1;colum<=row;colum++)
		{
			printf(" *");
		}printf("\n");
	}
}