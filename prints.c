#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
char str[50];
clrscr();
printf("\n enter the number:");
scanf("%d",&num);
printf("\n enter the string:");
scanf("%s",str);
for(i=1;i<=num;i++)
{
printf("\n %s",str);
}
getch();
}
