#include<stdio.h>
int main()
{
	FILE *file;
	char data[50];
	
	file=fopen("text2.txt","w");
	gets(data);
	fprintf(file,"%s",data);
	return 0;
}