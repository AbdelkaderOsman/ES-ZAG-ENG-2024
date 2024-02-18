#include <stdio.h>
 #include <stdlib.h>

unsigned int num =15;
unsigned int *ptr = &num;
int main()
{
  printf("The value of x = %i \n",num);
  *ptr = 20;
  printf("The value of x = %i \n",num);

return 0;
}
