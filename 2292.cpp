// 벌집

#include <stdio.h>

int main(void)
{
    int n, count = 0;
    scanf("%d", &n);

    n -= 1;
    while (n > 0)
    {
        count++;
        n = n - (6 * count);
    }
    printf("%d\n", count + 1);

    return 0;
}