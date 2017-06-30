#include<stdio.h>
#include<conio.h>
void main()
{
 char i;
 clrscr();
 printf("Enter a character\n");
 scanf("%c",&i);
 if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
 printf("\nthe entered character is a vowel");
 else
 printf("the entered character is a constant");
 getch();
}
