#include<stdio.h>
int main()
{
int a,i,f=0;
printf("enter the number:");
scanf("%d",&a);
for(i=2;i<=a/2;++i)
{
if(a%i==0)
{
f=1;
}
}
if(f==0)
{
printf("prime number");
}
else
{
printf("not a prime");
}
return 0;
}
