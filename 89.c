#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j;
int temp=0;
char a[10];
scanf("%s",a);
n=strlen(a);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("\n %s",a);
	return 0;
}
