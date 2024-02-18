#include <stdio.h>
#include <stdlib.h>

unsigned int A[9]={10,29,31,43,55,65,77,80,90};
unsigned int counter=0;
unsigned int *ptr = A;
float Average_number (unsigned int *p);
float result;

int main()
{
 printf("The value of numbers in array A = ");
   for(counter = 0 ; counter<sizeof(A)/4 ; counter++)
  {
   printf("%i \t",A[counter]);
  }
 printf("\n");

 result=Average_number(ptr)/(sizeof(A)/4);

 printf("The average = %0.6f \n",result);

  return 0;
}

float Average_number (unsigned int *p)
{
static float sum=0;
if(*p!='\0'){

  sum=*p + Average_number(p+1);
}
return sum ;
}
