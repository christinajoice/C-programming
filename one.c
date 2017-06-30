#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 printf("Enter a number");
 scanf("%d",&a);
 if(a>0)
 printf("The number %d is positive");
 else if(a<0)
 printf("%d is negative");
 else
 printf("The entered number is zero");
}
