#include<stdio.h>
int main()
{
	int a,num[50],i,sum=0;
	printf("\n enter the number:");
	scanf("%d",&a);
	printf("\n enter the numbers one by one:");
	for(i=0;i<a;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<a;i++)
	{
		sum=sum+num[i];
	}
	printf("\n sum is:%d",sum);
	return 0;
}
