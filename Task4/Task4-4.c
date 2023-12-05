#include <stdlib.h>
#include <stdio.h>

int main(){

  int num,x,NO1=0;

  printf("Enter the number: ");
  scanf("%d",&num);

  while(num!=0)
  {
      x=num%2;
      num=num/2;
      if(x == 1){ NO1++; }
  }
  printf("The number of ones is: %d",NO1);

  return 0;
  }
