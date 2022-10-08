#include<stdio.h>
int main()
{
	char choice;
	int num1=12,num2=9;
	
	printf("enter your choice : ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case '+': printf("%d",num1+num2);
		break;
		
		case '*': printf("%d",num1*num2);
		break;
		
		case '%': printf("%d",num1%num2);
		break;
		
		case '-': printf("%d",num1-num2);
		break;
	}
	
	  return 0;
}