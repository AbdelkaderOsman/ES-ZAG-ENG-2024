#include<stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int num[10],min,max=0;

    printf("Enter the numbers: ");
    scanf("%i",&num[0]);
    min=num[0];
    for (int i=1;i<10;i++)
    {
    scanf("%i",&num[i]);
    if(max<num[i]) {max=num[i];}
    if(min>num[i]) {min=num[i];}

    }

    printf("The maximum number is: %d \n",max);
    printf("The minimum number is: %d \n",min);

    return 0;
}
