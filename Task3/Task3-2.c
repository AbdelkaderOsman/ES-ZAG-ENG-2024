#include <stdlib.h>
#include <stdio.h>

int main(){

int i,j,n_rows,k=0;
printf("Enter the number of rows: ");
scanf("%d",&n_rows);
for(i=0;i<n_rows;i++)
{
    for(j=0;j<=i;j++)
    {
       k=k+1;
       printf("%d ",k);
    }
    printf("\n");
}

return 0;
}
