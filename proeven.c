#include<stdio.h>
int main()
{
int p,num,m;
printf("\n enter the number");
scanf("%d",&num);
while(num!=0)
{
m=num%10;
p=p+m;
num=num/10;
}
if(p%2==0)
{
printf("\n even");
}
else
{
printf("\n odd");
}
return 0;
}
