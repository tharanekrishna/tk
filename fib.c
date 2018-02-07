#include<stdio.h>
int main()
{
int a=0,b=1,num,i,c;
printf("enter a number");
scanf("%d",&num);
printf("%d%d",a,b);
for(i=1;i<num;i++)
{
  c=a+b;
  a=b;
  b=c;
  printf("%d",c);
}
return 0;
}
