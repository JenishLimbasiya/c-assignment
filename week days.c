#include<stdio.h>
int main()
{
	int week;
	
	printf("enter the week days : ");
	scanf("%d",&week);
	
	switch(week)
	
	{
	case 1 : printf("day is monday");
	break;
	
	case 2 : printf("day is tuesday");
	break;
	
	case 3 : printf("day is wednesday");
	break;
	
	case 4 : printf("day is thuesday");
	break;
	
	case 5 : printf("day is friday");
	break;
	
	case 6 : printf("day is saturday");
	break;
	
	case 7 : printf("day is sunday");
	break;
	
	default :
	printf("invalid !....please enter 1to7 days");
	}	
	
	return 0;
}