#include<stdio.h>
int main()
{
    int a,b;
    int temp=0;
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n%d %d",a,b);
    return 0;
    
}
