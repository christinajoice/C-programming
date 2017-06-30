#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i;
 clrscr();
 printf("enter a number ");
 scanf("%d",&a);
 i=a%2;
 if(i==0)
 printf("\nthe number is even");
 else
 printf("\nthe number is odd");
 getch();
}
