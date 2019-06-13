#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i;
 clrscr();
  scanf("%d",&a);
 i=a%2;
 if(i<0)
 printf("\ninvalid");
 else
 {
 if(i==0)
 printf("\neven");
 else
 printf("\nodd");
 }
 getch();
}
