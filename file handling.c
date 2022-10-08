#include<stdio.h>
int main()
{
	FILE*file;
	char data[50];
	
	file=fopen("text.txt","r");
	
	gets(data);
	fprintf(file,"%s",data);
}