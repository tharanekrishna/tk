#include<stdio.h>
int main()
{
int i,j,a,b;
char x[20],y[50];
printf("enter the first string\n");
scanf("%s",x);
printf("enter second string\n");
scanf("%s",y);
a=strlen(x[i]);
b=strlen(y[j]);
if(x[i]>y[j])
{
printf("the greatest string is %s\n",x);
}
else if(x[i]<y[j])
{
printf("the greatest string is %s\n",y);
}
else
{
printf("strings are equal");
}
return 0;
}
