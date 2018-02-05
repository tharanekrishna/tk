#include<stdio.h>
int  main()
{
int a,b,c;
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\nSwapped numbers:%d %d",a,b);
return 0;
}
