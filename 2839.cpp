// 설탕 배달_1차

#include <stdio.h>

int main(void)
{

    int n, ans;
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("%d\n", n / 5);
    }
    else
    {
        if ((n % 5) % 3 == 0)
            printf("%d\n", n / 5 + (n / 5) / 3);
        else
        {
            if (n % 3 == 0)
                printf("%d\n", n / 3);
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}