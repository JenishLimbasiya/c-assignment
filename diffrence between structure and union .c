#include<stdio.h>

struct student
{
	int id;
	char name[20];
};

union employee
{
	int id;
	char name[20];
};


int main()
{
	struct student jk;
	printf("enter id and name :\n");
	scanf("%d %s",&jk.id,&jk.name);
	printf("\nid = %d \nname = %s",jk.id,jk.name);
	
	printf("\nstructure = %d",sizeof(jk));
	
	union employee kh;
	printf("\n\n\nenter name and id :\n");
	scanf("%d %s",&kh.id,&kh.name);
	printf("\nid = %d \nname = %s",kh.id,kh.name);
	
	printf("\nunion = %d",sizeof(kh));
	return 0;
}