#include<stdio.h>
int main()
{
	int size,x;
	
	printf("enter the array size : ");
	scanf("%d",&size);//4
	
	int arr[size];
	
	printf("please enter the %d elements an array : \n",size);
	for(x=0;x<size;x++)
	{
		scanf("%d",&arr[x]);//27 5 3 1
	}
	 sortarray (size,arr);
	 
}

int sortarray(int size,int*a)
{
	int x,k,temp;
	for(x=0;x<size;x++)
	{
		for(k=x+1;k<size;k++)
		{
			if(*(a+x)>*(a+k))
			{
				temp=*(a+x);
				*(a+x)=*(a+k);
				*(a+k)=temp;
				
			}
		}
	}
	
	printf("\nsorted array elements is : ");
	for(x=0;x<size;x++)
	{
		printf("%d ",*(a+x));//1 3 5 27
		
	}
}