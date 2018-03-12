#include<stdio.h>
#include<string.h>
int main()
{
char s[10]="789jui09";
int i,a;
//scanf("%c",&s[10]);
a=strlen(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0'&& s[i]<='9')
{
printf("%c",s[i]);
}
}
return 0;
}
