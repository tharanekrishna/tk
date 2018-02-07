#include<stdio.h>
int main()
{
int max,i,b[10]={1,2,3,4,5,6,7,8,9,10};
max=b[0];
for(i=0;i<=10;i++)
{
if(b[i]>max)
{
max=b[i];
}
}
printf("%d\n",max);
return 0;
}
