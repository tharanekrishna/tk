#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=1;i<c;i++)
    {
        if(i*i==c)
        {
            printf("\n yes");
        }
        else
        {
            printf("\n no");
        }
      
    }
    return 0;
}
