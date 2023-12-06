#include <stdlib.h>
#include <stdio.h>

 int set_bit(unsigned char num,int bit);
 int clear_bit(unsigned char num,int bit);
 int toggle_bit(unsigned char num,int bit);
 int read_bit(unsigned char num,int bit);

int main(){
   unsigned char num;
   int bit,F_id;

   printf("Enter the number,bit and function id: \n");
   scanf("%d%d%d",&num,&bit,&F_id);

   switch(F_id)
   {
   case 1:
       set_bit(num,bit);
       break;
   case 2:
       clear_bit(num,bit);
       break;
   case 3:
       toggle_bit(num,bit);
       break;
   case 4:
       read_bit(num,bit);
       break;
   }




  return 0;

  }
  int set_bit (unsigned char num,int bit)
  {
      num=num|(1<<bit);

      printf("%d",num);
  }

  int clear_bit (unsigned char num,int bit)
  {
      num=num&~(1<<bit);

      printf("%d",num);
  }

  int toggle_bit(unsigned char num,int bit)
  {
      num=num^(1<<bit);

      printf("%d",num);
  }

  int read_bit (unsigned char num,int bit)
  {

      num=num&(1<<bit);

      if(num==0){printf("0");}
      else{printf("1");}

  }




