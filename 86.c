#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int flag=0,b,i;
printf("enter string\n");
scanf("%c",&a);
b=strlen(a);
for(i=0;i<b;i++)
{
if(a[i]==a[i+1])
{
flag=1;
}
break;
}
if(flag==1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
