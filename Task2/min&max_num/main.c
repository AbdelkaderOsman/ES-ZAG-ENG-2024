#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A,B,C,max,min;
   printf("Enter the numbers: ");
   scanf("%i%i%i",&A,&B,&C);
   if(A>B)
    { if(A>C){
            max=A;
            if(B>C){
                min=C;
            }else{
                min=B;
            }
    }else{
            max=C;
            min=B;
    }
   }else if(B>A){

        if(B>C){

            max=B;
            if(A>C){
                min=C;
            }else{
                min=A;
            }
        }else{
            max=C;
            min=A;

        }

   }


   printf("The maximum number is: %i \n",max);
   printf("The minimum number is: %i \n",min);




    return 0;
}
