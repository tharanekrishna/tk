#include <stdio.h>
int main()
{
    int a, b, i, flag, temp;
    printf("Enter two numbers(intevals): ");
    scanf("%d %d", &low, &high);
    if (a > b) {
        temp = a;
        a = b;
        b= temp;
    }

    printf("Prime numbers between %d and %d are: ", low, high);

    while (a< b)
    {
        flag = 0;

        for(i = 2; i <= a/2; ++i)
        {
            if(a % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", a);

        ++low;
    }

    return 0;
}
