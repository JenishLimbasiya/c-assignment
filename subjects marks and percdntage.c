#include<stdio.h>
int main ()
{
	int phy,che,maths,gujarati,bio,sum,x;
	float percentage;
	
	
	printf("enter the physics mark : ");
	scanf("%d",&phy);
	
	printf("enter the chemistry mark : ");
	scanf("%d",&che);
	
	printf("enter the maths mark : ");
	scanf("%d",&maths);
	
	printf("enter the gujrati mark : ");
	scanf("%d",&gujarati);
	
	printf("enter the biology mark : ");
	scanf("%d",&bio);
	
	printf("\ntotal marks is : %d\n",sum=phy+che+maths+gujarati+bio);
	percentage=sum/5;
	
	
	for(x=1;x<2;x++)
	{
		
	if(sum>500)
	{ 
		break;
		printf("percentage is : %.2f\n",percentage);
	}
	else
	{
			if(percentage>75&&percentage<=100)
	{
		printf("distinction..");
	}

	
		else if(percentage>60&&percentage<=75)
	{
		printf("first class");
	}
	
	else if(percentage>50&&percentage<=60)
	{
		printf("second class");
	}
	else if(percentage>35&&percentage<=50)
	{
		printf("pass class");
		
	}
	
	else
	{
		printf("fail");
	}
	
	}
	


	}	
	return 0;
}
	
	