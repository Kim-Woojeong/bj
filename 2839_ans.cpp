// 설탕배달_3차
#include <stdio.h>

int main(void)
{
    int n, count = 0;
    scanf("%d", &n);

    while (1)
    {
        if (n == 0 || n == 3 || n == 6 || n == 9 || n == 12)
        {
            break;
        }
        n -= 5;
        count++;
        if (n < 0)
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("%d\n", count + n / 3);

    return 0;
}