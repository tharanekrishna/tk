#include<stdio.h>
int main()
{
char str[10];
int num;
printf("enter the string:");
scanf("%s",&str);
num=strlen(str);
if(num%2==0)
{
str[(num/2-1)]='*';
}
else
{
str[num/2]='*';
}
printf("%s",str);
return 0;
}
