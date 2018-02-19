#include<stdio.h>
int main()
{
int num,sum=0,m;
printf("\n enter the number");
scanf("%d",&num);
while(num!=0)
{
m=num%10;
sum=sum+m;
num=num/10;
//sum++;
}
printf("\n %d",sum);
return 0;
}
