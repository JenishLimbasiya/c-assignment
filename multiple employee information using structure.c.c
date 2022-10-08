#include<stdio.h>

    struct employee
{
	char name[20];
	char address[20];
	int number;
	int age;

};

    int main()
{
    struct employee j[5];
    int x;
    
    for(x=0;x<5;x++)
    {
    	printf("\nenter the %d employee details : \n",x+1);
    	printf("enter the name : ");
    	scanf("%s",&j[x].name);
    	printf("enter the address : ");
    	scanf("%s",&j[x].address);
    	printf("enter the number : ");
    	scanf("%d",&j[x].number);
    	printf("enter the age : ");
    	scanf("%d",&j[x].age);   		
	}
	
	for(x=0;x<5;x++)
	{
		printf("\n%d employee details : \n",x+1);
		printf("name=%s \naddress=%s \nnumer=%d \nage=%d",j[x].name,j[x].address,j[x].number,j[x].age);
	}
            	
    return 0;
}
 