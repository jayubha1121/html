#include<stdio.h>
int main()
{
int rows=5,i;
 for (i=1;i<=rows;i++)
     {
        for(int space=1;space<=rows-i;space++){
                   printf(" ");
            }    
     
      for(int j=1;j<=i;j++)
      {
         printf("%d",i);   
      }
             printf("\n");
    } 
    return 0;
}
