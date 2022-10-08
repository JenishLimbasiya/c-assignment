#include<stdio.h>
  
int main()
{
    int a[100],i,search,size;
    printf("Enter the array size : ");
    scanf("%d",&size);//5
     
    printf("Enter array elements:\n");
    for(i=0;i<size;++i)
        {
        	scanf("%d",&a[i]);//2 3 4 7 6 
		}
     
    printf("\nEnter element to search:");
    scanf("%d",&search);//4
     
    for(i=0;i<size;i++)
    {
	   if(a[i]==search)//4==4
	   { 
	     printf("%d found at position is : %d",search,i);//2
	     return 0;
	   }  	
	}
	printf("%d is not found",search);
    
    return 0;
}