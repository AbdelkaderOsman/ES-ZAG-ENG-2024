#include <stdlib.h>
#include <stdio.h>

int main(){

  int num,i,result=1;
  printf("Enter the number: ");
  scanf("%d",&num);
  for(i=num;i>0;i--)
  {
      result=result*i;
  }
  printf("The factorial of %d is: %d",num,result);

 return 0;
 }
