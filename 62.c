#include<stdio.h>
int main()
{
int n;
printf("\n enter the number");
scanf("%d",&n);
if(((n%10)==0)||((n%10)==1))
printf("\n %d is a binary number",n);
else
printf("\n %d is not a binary number",n);
return 0;
}
