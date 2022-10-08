#include<stdio.h>
int main()
{
	int a,b; 
	printf("enter two number : ");
	scanf("%d%d",&a,&b); //a=10, b=5
	
	a=a+b; //10+5=15
	b=a-b;//15-5=10
	a=a-b;//15-10=5
	
	printf("a=%d b=%d",a,b);//a=5, b=10
	return 0;
}