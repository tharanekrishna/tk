#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,len;
printf("enter the string\n");
scanf("%s",&a[i]);
len=strlen(a);
for(i=0;i<len;i++)
{
	if(i%2==0)
	{
printf("%c",a[i]);
}
}
printf(" ");
for(i=0;i<len;i++)
{
	if(i%2==1)
	{
printf("%c",a[i]);
}
}
return 0;
}
