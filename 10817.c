#include <stdio.h>

int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x > y)
    {
        if (y > z)
            printf("%d\n", y);
        else if (y < z)
        {
            if (x > z)
                printf("%d\n", z);
            else
                printf("%d\n", x);
        }
        else
        {
            printf("%d\n", y);
        }
    }

    else if (x < y)
    {
        if (x > z)
            printf("%d\n", x);
        else if (x < z)
        {
            if (y > z)
                printf("%d\n", z);
            else
                printf("%d\n", y);
        }
        else
        {
            printf("%d\n", x);
        }
    }
    else
    {
        printf("%d\n", x);
    }
    return 0;
}