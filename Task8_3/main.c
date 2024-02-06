#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

 int Number,BIT,choise;
int main()
 {
     printf("Enter the number: \n");
     scanf("%i",&Number);
     printf("Enter the bit position : \n");
     scanf("%i",&BIT);
     printf("Choose the operation \n 1- set bit \n 2- clear bit \n 3- toggle bit\n ");
     scanf("%i",&choise);
     switch(choise)
     {
     case 1:
        Set_Bit(Number,BIT);
        break;
     case 2:
        Clr_Bit(Number,BIT);
        break;
     case 3:
        Toggle_Bit(Number,BIT);
        break;
     default:
        printf("ERROR");
        break;
     }

      printf("The number after operation is: %i\n",Number);


     return 0;
 }
