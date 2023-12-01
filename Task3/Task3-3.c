#include <stdlib.h>
#include <stdio.h>


 int main(){

 int num,Pow,Result=1;

 printf("Enter the number then the power: ");
 scanf("%d%d",&num,&Pow);

 for(int i=0;i<Pow;i++)
 {
     Result=Result*num;
 }

 printf("The result is : %d",Result);

 return 0;
 }
