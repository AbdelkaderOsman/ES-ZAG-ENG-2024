#include <stdlib.h>
#include <stdio.h>

int main(){

  int a,b,c,d,x,y,result=0;

  printf("Enter the four numbers: ");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  x=a*b*c*d;


  y= x%10;
  x=x/10;
  result=y*10 + result;
   y= x%10;
  result=y*10 + result;


 printf("result= %d",result);
  return 0;
  }
