#include <stdio.h>
#include <stdlib.h>
 typedef struct{

 unsigned int Salary;
 unsigned int Bonus;
 unsigned int Deduction;

 }net;

 net Ahmed;
 net Amr;
 net Waleed;

 unsigned int summing (net x);
 unsigned int Value;
 int main()
 {
     printf("Please Enter Ahmed Salary: ");
     scanf("%i",&Ahmed.Salary);
     printf("Please Enter Ahmed Bonus: ");
     scanf("%i",&Ahmed.Bonus);
     printf("Please Enter Ahmed Deduction: ");
     scanf("%i",&Ahmed.Deduction);
     printf("Please Enter Amr Salary: ");
     scanf("%i",&Amr.Salary);
     printf("Please Enter Amr Bonus: ");
     scanf("%i",&Amr.Bonus);
     printf("Please Enter Amr Deduction: ");
     scanf("%i",&Amr.Deduction);
     printf("Please Enter Waleed Salary: ");
     scanf("%i",&Waleed.Salary);
     printf("Please Enter Waleed Bonus: ");
     scanf("%i",&Waleed.Bonus);
     printf("Please Enter Waleed Deduction: ");
     scanf("%i",&Waleed.Deduction);

     Value = summing(Ahmed)+summing(Amr)+summing(Waleed);
     printf("Total Value Needed is %i",Value);

     return 0;
 }

 unsigned int summing (net x)
 {
     unsigned int Money;

     Money = x.Salary + x.Bonus - x.Deduction;


     return Money;
 }
