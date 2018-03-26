#include <stdio.h>
int main() 
{
int a,k,i,res=1;
scanf("%d%d",&a,&k);
for(i=1;i<=k;i++)
{
res=res*a;
}
printf("%d",res);
return 0;
}
