#include<stdio.h>
int main()
{
	char str[100],str1[100],length,x;
	
	printf("enter the string : ");
	gets(str);//jenish
	
	printf("string str : %s\n",str);//jenish
	
	length=strlen(str);//jenish
	//printf("length is : %d",length);
	for(x=0;x<length;x++)
	{
		str1[x]=str[x];
	}
	//printf("null : %s\n",str1[x]);
   
	str1[x]='\0';
	printf("\nstring str1 : %s",str1);
   
    return 0;
}