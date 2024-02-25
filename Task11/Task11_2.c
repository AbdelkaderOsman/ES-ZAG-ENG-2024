#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

char Name[10];
float Price;
unsigned int Quantity;

}item;
 item x={"XYZ",25.75,12};

void Increament (item *p);
int main()
{
    Increament(&x);

  printf("Name : %s \n",x.Name);
  printf("Price : %f \n",x.Price);
  printf("Quantity : %i \n\n",x.Quantity);

  printf("Values of the item = %f\n",(x.Price * x.Quantity));

    return 0;
}

void Increament (item *p)
{
  float Pincrement;
  unsigned int Qincrement;
   printf("Input increment values: price increment and quantity increment \n");
   scanf("%f",&Pincrement);
   scanf("%i",&Qincrement);

   p->Price += Pincrement;
   p->Quantity += Qincrement;

   printf("Updated values of item\n\n");
}
