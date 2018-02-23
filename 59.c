#include<stdio.h>
int main()
{
	int b[10];
	int n,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
	if(max<b[i])
	{
		max=b[i];
	}
	}
		printf("%d",max);
		return 0;
}
