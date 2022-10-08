#include<stdio.h>
int main()
{
	char str[100]="helloworld";
	slice(str, 3, 6);
	return 0;
}

void slice(char str[100],int n,int m)
{
	char newstr[100];
	int j=0;
	for(int i=n; i<=m; i++,j++)
	
	{
		newstr[j]=str[i];
	}
	newstr[j]='\0';
	puts(newstr);
	
}
