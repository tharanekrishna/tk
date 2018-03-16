#include<stdio.h>
int main()
{
int a,b;
int x,y,rem,gcd,lcm;
printf("entr number\n");
scanf("%d%d",&x,&y);
a=x;
b=y;
do
{
rem=x%y;
if(rem==0)
break;
x=y;
y=rem;
}
while(rem!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("%d",lcm);
return 0;
}
