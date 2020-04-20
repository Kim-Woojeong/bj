#include <stdio.h>

int main(void)
{
    int num, x, y, sum;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &x, &y);
        sum = x + y;
        printf("%d\n", sum);
    }
}