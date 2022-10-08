#include<stdio.h>
int main()
{
	FILE *file;
	char data[50];
	
	file=fopen("text.txt","r");
	fscanf(file, "%s",&data);
	printf("%s",data);
	
	return 0;
}