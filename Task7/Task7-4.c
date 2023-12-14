#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    printf("Enter the number of intgers:");
    scanf("%d",&n);
    unsigned int num[n];
    printf("Enter the numbers:");
    for (int i=n-1;i>=0;i--)
    {
        scanf("%i",&num[i]);
    }
    printf("The reverse is: \n");
    for (int j=0;j<n;j++)
    {
        printf("%d\n",num[j]);
    }



    return 0;
}
