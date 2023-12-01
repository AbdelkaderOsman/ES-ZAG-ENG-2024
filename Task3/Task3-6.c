#include <stdlib.h>
#include <stdio.h>

int main(){

  int min,max,num,NO_num;

  printf("Enter the No of numbers: ");
  scanf("%d",&NO_num);

  printf("Enter the numbers: ");
  scanf("%d",&num);

  min=num;
  max=num;

  for(int i=1;i<NO_num;i++)
  {
      scanf("%d",&num);
      if(num>max){max=num;}
      if(num<min){min=num;}
  }
  printf("The maximum number is (%d) and the minimum number is (%d)",max,min);
 return 0;
 }
