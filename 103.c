#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int i,l;
scanf("%c",&str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(i==0)
{
str[i]=upper(str[i]);
printf("%c",str[i]);
}
else
{
printf("%c",str[i]);
}
return 0;
}
