#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n,sum=0;
    printf("Enter the number of integers: ");
    scanf("%i",&n);
    unsigned int num[n];
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%i",&num[i]);
        sum=sum+num[i];
    }
    printf("The sum of numbers= %d",sum);

    return 0;
}
