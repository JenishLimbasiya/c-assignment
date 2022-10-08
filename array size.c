#include<stdio.h>
int main()
{
	int a[] = {11,222,32,41,45};
	
	int x,size;
	
	size = sizeof(a)/sizeof(a[0]);
	printf("array size is : %d\n",size);
	
	for(x=0;x<size;x++)
	{
		printf("%d\n",a[x]);
	}
	
	return 0;
}