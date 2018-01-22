#include<stdio.h>
#include<math.h
#include<conio.h>
int main()
{
int n,i,fact=1;
clrscr();
printf("\n enter the num");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",&fact);
}
