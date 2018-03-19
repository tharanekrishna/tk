#include<stdio.h>
int main()
{
int p,t,r,floor;
printf("\nenter the princile amount");
scanf("%d",&p);
printf("\n enter the time");
scanf("%d",&t);
printf("\n enter the rate");
scanf("%d",&r);
floor=(p*t*r)/100;
printf("\n the floor values is %d",floor);
return 0;
}
