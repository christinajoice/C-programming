#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrcsr();
printf("Enter a character");
scanf("%c",&c);
if(c='a'||c='b'||c='c'||c='d'||c='e'||c='f'||c='g'||c='h'||c='i'||c='j'||c='k'||c='l'||c='m'||c='n'||c='o'||c='p'||c='q'||c='r'||c='s'||c='t'||c='u'||c='v'||c='w'||c='x'||c='y'||c='z')
printf("The entered character is an alphabet");
else
printf("The character is not an alphabet");
getch();
}
