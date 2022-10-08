#include<stdio.h>
int main()
{
	char str[50];
	puts("enter the any string : ");
	gets(str);
	
	int i,length=0;
	for(i=0;str[i]!='\0';i++)
	{
	   ++length;
	
    }
    	printf("%d",length);
		
	return 0;
}