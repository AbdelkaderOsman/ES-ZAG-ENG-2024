#include <stdlib.h>
#include <stdio.h>

int main(){

  int strt,finl,i;

  printf("Enter the start number: ");
  scanf("%d",&strt);
  printf("Enter the last number: ");
  scanf("%d",&finl);
  if(strt>=finl){printf("Error");}
  for(i=strt;i<=finl;i++)
  {
      printf("%d\n",i);
  }

 return 0;
 }
