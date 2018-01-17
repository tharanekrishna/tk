#include<stdio.h>
#include<conio.h>
void main()
{
int num,onum,rem,res=0;
clrscr();
printf("Enter the Number: ");
scanf("%d",&num);
onum=num;
while(num!=0)
{
rem=num%10;
num=num/10;
res=res*10+rem;
}
printf("%d\n",res);
if(res==onum)
printf("%d is Palindrome",onum);
else
printf("%d is not a Palindrome",onum);
getch();
}
