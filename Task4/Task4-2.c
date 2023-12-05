#include <stdlib.h>
#include <stdio.h>

int main(){

  int num,charc,x;

  printf("Enter the character: ");
  scanf("%c",&charc);
  printf("Enter the number: ");
  scanf("%d",&num);
  x=num%2;
  charc^=(x<<5);
  printf("%c",charc);


 return 0;
 }
