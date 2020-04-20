#include <stdio.h>

int main(void)
{
    int x, sum = 0;
    scanf("%d", &x);
    for (int i = 1; i < x + 1; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
}