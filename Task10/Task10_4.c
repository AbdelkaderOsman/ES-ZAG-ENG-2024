#include <stdlib.h>
#include <stdio.h>

unsigned int Number;
unsigned int Factorial=1;
unsigned int *ptr=&Factorial;
void Num_Factorial (unsigned int Num);

int main()
{
    printf("Enter the number: \n");
    scanf("%i",&Number);
     Num_Factorial(Number);
     printf("The factorial of %i is equal %i \n",Number,Factorial);

    return 0;
}

void Num_Factorial (unsigned int num)
{
    if (num>=1)
    {
        *ptr*=num;
        num--;
        Num_Factorial(num);

    }

}
