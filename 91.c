#include<stdio.h>
int main()
{
int l,b,h,sar,vo;
printf("enter values\n");
scanf("%d%d%d\n",&l,&b,&h);
vo=l*b*h;
sar=2*l*b+2*b*h+2*h*l;
printf("%d %d\n",vo,sar);
return 0;
}
