#include <stdio.h>
#include <stdlib.h>
int i;
int main()
{

int class1[10];
int class2[10];
int class3[10];
int pass1,pass2,pass3;
int fail1,fail2,fail3;
int max,max1,max2,max3,min,min1,min2,min3;
int sum1=0,sum2=0,sum3=0,avg;



printf("Enter the grades in class 1: ");
for(i=0;i<10;i++)
{
    scanf("%d",&class1[i]);
    sum1=sum1+class1[i];
}
printf("Enter the grades in class 2: ");
for(i=0;i<10;i++)
{
    scanf("%d",&class2[i]);
    sum2=sum2+class2[i];
}
printf("Enter the grades in class 3: ");
for(i=0;i<10;i++)
{
    scanf("%d",&class3[i]);
    sum3=sum3+class3[i];
}

//--------pass and fail-------//
pass1=0;
fail1=0;
for(i=0;i<10;i++)
{
    if(class1[i]>=50){pass1++;}else{fail1++;}
}
pass2=0;
fail2=0;
for(i=0;i<10;i++)
{
    if(class2[i]>=50){pass2++;}else{fail2++;}
}
pass3=0;
fail3=0;
for(i=0;i<10;i++)
{
    if(class3[i]>=50){pass3++;}else{fail3++;}
}
printf("Number of passed students: %d\n",pass1+pass2+pass3);
printf("Number of failed students: %d\n",fail1+fail2+fail3);

//---------max and min--------//
max1=class1[0];
min1=class1[0];
for(i=1;i<10;i++)
{
    if(max1<class1[i]){max1=class1[i];}
    if(min1>class1[i]){min1=class1[i];}
}
max2=class2[0];
min2=class2[0];
for(i=1;i<10;i++)
{
    if(max2<class2[i]){max2=class2[i];}
    if(min2>class2[i]){min2=class2[i];}
}
max3=class3[0];
min3=class3[0];
for(i=1;i<10;i++)
{
    if(max3<class3[i]){max3=class3[i];}
    if(min3>class3[i]){min3=class3[i];}
}

if (max1>max2)
{
    if(max1>max3){max=max1;}
}else if(max2>max3)
{
    max=max2;
}else {max=max3;}
 printf("the highest degree: %d\n",max);

 if(min1<min2)
 {
     if(min1<min3){min=min1;}
 }else if(min2<min3)
 {
     min=min2;
 }else {min=min3;}
 printf("The lowest degree: %d\n",min);

avg=(sum1+sum2+sum3)/30 ;
printf("The average grade is: %d\n",avg);


    return 0;
}
