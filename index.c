#include <stdio.h>
#include<conio.h>
void main()
{
  int a[5],n;
  clrscr();
  printf("Enter the no of element:");
  scanf("%d",&n);
  printf("Elements are:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t%d\n",i,a[i]);
  }
  getch();
}
  
