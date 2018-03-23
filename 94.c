#include<stdio.h>
int main()
{
int n,k,a[4],i;
printf("enter N value\n");
scanf("%d",&n);
printf("enter K value\n");
scanf("%d",&k);
printf("enter n elements\n");
for(i=0;a[i]!='\0';i++)
{
scanf("%d",&a[i]);
if(a[i]==k)
{
printf("%d",k);
}
}
return 0;
}
