#include<stdio.h>
int main()
{
int a[100],n,i,j,temp[100];
printf("\n enter the total no of elements);
scanf("%d",&n);
printf (" enterthe element");
for(i=0;i<=n;++i)
{
for(j=j+1;j<=n;++j)
{
if(a[i]>a[j])
{
temp[i]=a[i];
a[i]=a[j];
a[j]temp[i];
}
}
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
rturn 0;
}

