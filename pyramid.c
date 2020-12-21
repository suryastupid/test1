#include <stdio.h>

int main()
{
    int value,j;
    scanf("%d",&value);
    for(int i=1;i<=value;i++,j=0)
    {
        printf("\n");
        int k=i;
        while(k<=value)
        {
            printf("\t");
            k=k+1;
        } 
        j=i-1;
        j=j+j+1;
        while(j>0) 
        {
         printf("*\t");
         j--;
        }

        
    }

    return 0;
}
