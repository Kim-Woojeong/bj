#include <stdio.h>

int main(void)
{
    int num, x, y;
    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++)
    {
        scanf("%d %d", &x, &y);
        printf("Case #%d: %d + %d = %d\n", i, x, y, x + y);
    }
    return 0;
}