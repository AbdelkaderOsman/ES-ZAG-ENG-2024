#include <stdlib.h>
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    for (int i=0;str[i]!='\0';i++)
    {
        if(str[i]== ' ')
        {
            printf("\n");
        }else{printf("%c",str[i]);}
    }

    return 0;
}
