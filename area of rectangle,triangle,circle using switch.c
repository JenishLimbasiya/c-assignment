#include<stdio.h>
int main()
{
   int choice;
   float radius,area,width,length,base,hight,pi=3.14;
   
   printf("enter no 1 for area of circle : \n");
   printf("enter no 2 for area of rectangle : \n");
   printf("enter no 1 for area of triangle : \n");
   printf("enter your choice : ");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   	printf("enter the radius of circule : ");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	printf("area of circle = %.2f",area);
	break;
	
	case 2:
	printf("enter the length : ");
	scanf("%f",&length);
	
	printf("enter the width : ");
	scanf("%f",&width);
	 
	area=length*width;
	printf("area of rectangle = %.2f",area);
	break;
	
	case 3:
	printf("enter the base : ");
	scanf("%d",&base);
	
	printf("enter the hight : ");
	scanf("%d",&hight);
	
	area=(base*hight)/2;
	printf("area of triangle = %.2f",area);	
	break;
	
	default:
	printf("enter the correct choice.....");
   }
   return 0;
}