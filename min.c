#include,stdio.h>
int main()
{
int a[10],n,i,min;
printf("\n enter the no of element');
scanf("%d",&n);
printf("\n enter the element");
scanf("%d",&a[i]);
min=a[i];
for(i=0;i<=n;i++)

{
if (a[i]>min)
{
min=a[i];
}
printf("\n the min no is %d",min);
}
return 0;
}
