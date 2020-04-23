// 손익분기점
#include <stdio.h>

int main()
{
    int a, b, c, x = 1;
    scanf("%d %d %d", &a, &b, &c);

    while (x > 0)
    {
        if ((a + (b - c) * x) < 0)
        {
            printf("%d\n", x);
            break;
        }
        else
        {
            x++;
        }
    }

    return 0;
}