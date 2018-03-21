
#include<stdio.h>
int main()
{
int a[10],i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
}
}
return 0;
}
