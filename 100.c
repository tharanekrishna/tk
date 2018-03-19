#include<stdio.h>
int main()
{
int rem=0,rs=1,num;
printf("enter the num\n");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rs=rs*rem;
num=num/10;
}
printf("%d",rs);
return 0;
}
