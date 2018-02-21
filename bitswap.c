#include<stdio.h>
int main()
{
    int a,b;
    //int temp=0;
    scanf("%d%d",&a,&b);
  a^=b;
  b^=a;
  a^=b;
    printf("\n%d %d",a,b);
    return 0;
    
}
