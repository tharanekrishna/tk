#include<stdio.h>
int main()
{
    int n,m;
    printf("\n enter the number");
    scanf("%d",&m);
    while(m!=0)
    {
        n=m%10;
        if(m%2!=0)
        
            printf("%d is odd",n);
            m=m/10;
        
    }
    return 0;
} 
