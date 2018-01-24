#include<stdio.h>
int main()
{
int i,j,n,k[i];
int temp;
printf("enter the number");
scanf("%d",&n);
printf("enter the array of n number");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=j+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("\n the max no is a[n-1] /d\t");
}
}
return 0;
}

