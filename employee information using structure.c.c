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
    struct employee j;
    
      	printf("\nenter the employee details : \n");
    	printf("enter the name : ");
    	scanf("%s",&j.name);
    	printf("enter the address : ");
    	scanf("%s",&j.address);
    	printf("enter the number : ");
    	scanf("%d",&j.number);
    	printf("enter the age : ");
    	scanf("%d",&j.age);
    		
	
		printf("\nemployee details : \n");
		printf("name=%s \naddress=%s \nnumer=%d \nage=%d",j.name,j.address,j.number,j.age);
	          	
    return 0;
}
 
