#include <stdlib.h>
#include <stdio.h>

int main(){

 int num,x,y=0,p=1;

 printf("Enter number: ");
 scanf("%d",&num);

 while(num!=0){

    x=num%2;
    num=num/2;
    y=y+x*p;
    p=p*10;

 }
 printf("%d",y);

 return 0;
}
