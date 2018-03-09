#include<stdio.h>
#include<conio.h>
void main()
{
int i,l;
int flag=0;
char a[6]="laptop";
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]!=a[l-i-1])
{
flag=1;
break;
}
}
if(flag)
{
printf("%c is not a palindrome",a);
}
else
{
printf("%c is a palindrome",a);
}
getch();
}
