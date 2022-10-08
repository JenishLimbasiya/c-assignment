
#include<stdio.h>

struct Student // size : 24
{
 	int rollNo; // 4
	char name[90]; // 20
 };
 
int main()
{
	struct Student xyz;
	
	printf("Enter student details :");
	scanf("%d",&xyz.rollNo);
	printf("%d",xyz.rollNo);
	
//	scanf("%s",&xyz.name);
//	printf("%s",xyz.name);

scanf ("%d %s",&xyz.rollNo,&xyz.name);
printf("%d %s",xyz.rollNo,xyz.name);	
	
	return 0;
}

