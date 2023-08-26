#include<stdio.h>
#include<string.h>
main()
{
//	char carname[20]="mercedez";
//	int i; 
//	for(i=0;i<8;i++)
//	{
//		printf("\n%c",carname[i]);
//	}

 char name[20];
 printf("Enter your name :");
 gets(name);
 printf("name=%s",name);
 printf("\nuppercase=%s",strupr(name));
 printf("\nlowercase=%s",strlwr(name));
  printf("\nreverse=%s",strrev(name));
   printf("\nlength=%d",strlen(name));
}
