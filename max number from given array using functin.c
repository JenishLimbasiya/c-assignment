#include<stdio.h>

int main()
{
	max();
	return 0;
}
int max()
{
  int arr[100];
  int x;
  printf("enter the number : \n");
  for(x=0;x<6;x++)
  {
  	scanf("%d",&arr[x]);//1 2 3 4 6 9
  }
  	int y,max=arr[0];
	
	for(y=0;y<6;y++)
	{
		if(arr[y]>max)//1>1 2>1 3>2 4>3 6>4 9>6
		{
			max=arr[y];//9
			
		}
	}printf("max number is %d",max);//9
}