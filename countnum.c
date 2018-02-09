#include<stdio.h>
int main()
{
int n,i=0;
printf("enter the no.");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++i;
}
printf("\nthe numeric numbers presented id:%d",i);
return 0;
}
