#include <stdio.h>
#include <stdlib.h>

unsigned int x = 10 ,y = 20 ,z = 30,temp = 0;
unsigned int *p= &x ;
unsigned int *q= &y ;
unsigned int *r= &z ;

int main()
{

    printf("The value of x = %i\n",x);
    printf("The value of y = %i\n",y);
    printf("The value of z = %i\n\n",z);

    printf("The address stored in p = 0x%X\n",p);
    printf("The address stored in q = 0x%X\n",q);
    printf("The address stored in r = 0x%X\n\n",r);

    printf("The value that pointer p points to = %i\n",*p);
    printf("The value that pointer q points to = %i\n",*q);
    printf("The value that pointer r points to = %i\n",*r);

    printf("\n Swapping pointers \n\n");

    temp = p;
    p = q;
    q = r;
    r = temp;

    printf("The value of x = %i\n",x);
    printf("The value of y = %i\n",y);
    printf("The value of z = %i\n\n",z);

    printf("The address stored in p = 0x%X\n",p);
    printf("The address stored in q = 0x%X\n",q);
    printf("The address stored in r = 0x%X\n\n",r);

    printf("The value that pointer p points to = %i\n",*p);
    printf("The value that pointer q points to = %i\n",*q);
    printf("The value that pointer r points to = %i\n",*r);

    return 0;
}
