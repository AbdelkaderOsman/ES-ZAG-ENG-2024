#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num,x=1,y=2;

    printf("Enter the number: ");
    scanf("%d",&num);
    if(num>=0)
    {
        switch(num)
        {
        case (0):
            printf("The number is not prime");
            break;
        case (1):
            printf("The number is not prime");
            break;
        case (2):
            printf("The number is prime");
            break;
        default:
            while((y!=num) & (x!=0))
            {
                x=num%y;
                y++;
            }
            if(x==0)
            {
                printf("The number is not prime");
            }
            else
            {
                printf("The number is prime");
            }

        }
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}
