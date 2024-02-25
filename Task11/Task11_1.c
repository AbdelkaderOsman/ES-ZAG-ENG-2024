#include <stdio.h>
#include <stdlib.h>

typedef struct{

   unsigned int H;
   unsigned int M;
   unsigned int S;

}Time;

Time st;
Time et;



int main()
{

    printf("Enter start time:\n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%i",&st.H);
    scanf("%i",&st.M);
    scanf("%i",&st.S);


    printf("Enter stop time:\n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%i",&et.H);
    scanf("%i",&et.M);
    scanf("%i",&et.S);
if (st.H>12 || st.M>60 || st.S>60 || et.H>12 || et.M>60 || et.S>60)
{
    printf("Error\n");
}else{
    printf("TIME DIFFERENCE: %i:%i:%i - %i:%i:%i = %i:%i:%i ",st.H,st.M,st.S,et.H,et.M,et.S,(st.H-et.H),(st.M-et.M),(st.S-et.S));
}




    return 0;
}
