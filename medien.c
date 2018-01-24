#include<stdio.h> 
void main()
{
int a[10],i,n;
printf("enter array element");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\narray %d",i);
}
int low=a[0],high=n,mid;
if(low<high)
{
	mid=(low+high)/2;
	printf("\n%d",mid);
}
}
