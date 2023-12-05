#include <stdlib.h>
#include <stdio.h>

int main(){

  int num,y,x;

  printf("Enter the number: ");
  scanf("%d",&num);

  while(num!=0)
  {
      x=num%10;
      num=num/10;
      y=y*10+x;

  }
  printf("The number: %d",y);

  return 0;
  }
