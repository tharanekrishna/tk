#include<stdio.h>
int main()
{
int a=0,b=1,num,i,c;
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("\n %d",a);

c=a+b;
a=b;
b=c;
}
printf("\n%d",c);
return 0;
}

