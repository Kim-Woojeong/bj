// 설탕 배달_2차

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 10)
    {
        if (n % 3 == 0)
            printf("%d\n", n / 3);
        else if (n % 5 == 0)
            printf("%d\n", n / 5);
        else if ((n % 5) % 3 == 0)
            printf("%d\n", 2);
        else
            printf("-1\n");
    }
    else
    {
        if (n % 5 == 0)
            printf("%d\n", n / 5);
        else
        {
            if ((n % 5) % 3 == 0)
                printf("%d\n", n / 5 + 1);
            else
            {
                if ((n % 5) % 1 == 0)
                {
                    n = n - 6;
                    printf("%d\n", n / 5 + 2);
                }
                else if ((n % 5) % 2 == 0)
                {
                    n = n - 12;
                    printf("%d\n", n / 5 + 4);
                }
                else if ((n % 5) % 4 == 0)
                {
                    n = n - 9;
                    printf("%d\n", n / 5 + 3);
                }
                else
                {
                    printf("-1\n");
                }
            }
        }
    }

    return 0;
}