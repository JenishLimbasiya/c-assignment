#include<stdio.h>
int main()
{
    int palindrome,number;
    printf("Enter a number to check for Palindrome: ");
    scanf("%d", &number);//121
    
    palindrome =revers(number);
    
    if(palindrome == 2)
        printf("%d is palindrome\n", number);
    else
        printf("%d is not palindrome", number);
    
    return 0;
}
int revers(int number)
{
  int reminder,n=number;
  static int revers_number=0;
  
  if(n!=0)
  {
  	reminder=n%10;
  	revers_number=revers_number*10+reminder;
  	revers(n/10);
  }
  
  if(revers_number==number)
  {
  	return 2;
  }
  else
  {
  	return 0;
  }
}