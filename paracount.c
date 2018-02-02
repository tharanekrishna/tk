#include<stdio.h>
#include<conio.h>
int main()
{
    int b,n=0,i,c,nm=0;
    char a[100]="hello.world";
    char j;
    clrscr();
    b=strlen(a);
    for(i=0;i<=10;i++)
    {
        if(a[i]=='.')
        {
            nm++;
}  
}
printf(" total paragraph=%d",nm+1);
getch();
}            
