#include<stdio.h>
int main()
{
int a[30],n,i,sum=0,avg;
printf("\n enter the no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[30]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("\n the avg is %d",avg);
return 0;

}
