#include<stdio.h>
int main()
{
    int numrows=5;
    for (int i = numrows;i>=1;i--)
    {
        for (char ch ='a';ch<='a'+i-1;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
