#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned int freq[10]={0};

    char num[100];
    printf("Enter the elements:");
    fgets(num,100,stdin);

        for(int h=0;num[h]!='\0';h++)
        {
            if(num[h]>='0' && num[h]<='9')
            {
               freq[num[h]-'0']++;
            }
        }
        for(int i=0;i<10;i++)
        {
            printf("%d",freq[i]);
        }


    return 0;
}
