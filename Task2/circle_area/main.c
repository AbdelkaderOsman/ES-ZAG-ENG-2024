#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14159

int main()
{
  float Radius;
  float area;
  printf("Enter the redius : ");
  scanf("%f",&Radius);
  area = Pi*Radius*Radius;
  printf("The area of the circle = %f",area);



    return 0;
}
