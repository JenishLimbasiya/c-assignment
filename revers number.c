#include<stdio.h>
int main()
{
  int number, reminder,revers=0;
  printf("enter any number : ");
  scanf("%d",&number);
  
  while(number!=0)
  {
  	reminder=number%10;
  	revers=revers*10+reminder;
  	number=number/10;
  	
  }
    printf("%d",revers);
    return 0;
}