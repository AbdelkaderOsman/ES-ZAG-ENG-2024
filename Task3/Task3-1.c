#include <stdlib.h>
#include <stdio.h>



int main(){

  int a,b,c,d,e;

   printf("Enter the numbers: \n");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   printf("The numbers divided by 3 are: ");
   if((a % 3) == 0){printf("%d ",a);}
   if((b% 3) == 0){printf("%d ",b);}
   if((c% 3) == 0){printf("%d ",c);}
   if((d% 3) == 0){printf("%d ",d);}
   if((e% 3) == 0){printf("%d ",e);}

return 0;
}
