
#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b[50],i;
printf("\n enter the 1st string:");
scanf("%s",a);
printf(" \n enter the second string");
scanf("%s",b);
if(a[i]<=b[i])
{
printf("\n %s",b);
}
else if(a[i]>=b[i])
{
printf("\n%s",a);
}
else
{
printf("\n%s%s",a,b);
}
getch();
}
