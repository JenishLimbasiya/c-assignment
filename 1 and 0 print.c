#include<stdio.h>
int main()
{
	int row,col,x=1,y=0;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col%2==0)
			{
		    	printf("%d ",y);
		    	
			}
			else
		    {
		     	printf("%d ",x);
		     	
	    	}
		}printf("\n");
	}
	return 0;
}