#include <stdio.h>
#include <stdlib.h>

unsigned int number1 = 10;
unsigned int number2 = 5;
unsigned int sum;
unsigned int sub;
unsigned int *p1 = &sum;
unsigned int *p2 = &sub;

void sum_sub(unsigned int num1 , unsigned int num2 );

int main()
{

   printf("number1 value   = %i   \n",number1);
   printf("number2 value   = %i   \n",number2);

   sum_sub(number1,number2);

   printf("summation   = %i \n",sum);
   printf("subtraction = %i \n",sub);


    return 0;
}

void sum_sub(unsigned int num1 , unsigned int num2 )
{
    *p1=num1+num2;
    *p2=num1-num2;
}

