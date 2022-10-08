#include<stdio.h>
int main()
{
	char str1[100],str2[100],*a,*b;
	
	printf("enter the first string : ");
	gets(str1);//jenish
	printf("enter the second string : ");
	gets(str2);//limbasiya
	
	a=str1;//jenish
	b=str2;//limbasiya
	
	while(*a!='\0')
	{
		a++;//jenish
	}
	
	while(*b!='\0')
	{   *a=*b;
		b++;//limbasiya
		a++;//jenish limbasiya
	}
	*a='\0';
	printf("after the concatention : %s",str1);//jenish limbasiya
	
	return 0;
}