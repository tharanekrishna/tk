
#include<stdio.h>
int main()
{
int num,a,i;
printf("enter the num\n");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
a=1;
break;
}}
if(a==0)
{
printf("prime no");
}
else
{
printf("the number is composite num\n");
}
return 0;
}
