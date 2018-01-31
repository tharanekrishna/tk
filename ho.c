#include,stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n enter the time in min");
scanf("%d",&a);
b=a/60;
c=a-(b*60);
printf("\n %d %d",b,c);
getch();
}
