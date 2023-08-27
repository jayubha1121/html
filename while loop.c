#include<stdio.h>
void main()
{
    int i,j,c;
    do
    {
        j=1;
        do
        {
            printf("%d",j);
              j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
    
}
