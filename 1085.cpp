// 직사각형에서 탈출

#include <stdio.h>

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    if ((h - y) < (w - x))
    {
        if (x < y)
        {
            if ((h - y) < x)
                printf("%d\n", h - y);
            else
                printf("%d\n", x);
        }
        else
        {
            if ((h - y) < y)
                printf("%d\n", h - y);
            else
                printf("%d\n", y);
        }
    }
    else
    {
        if (x < y)
        {
            if ((w - x) < x)
                printf("%d\n", w - x);
            else
                printf("%d\n", x);
        }
        else
        {
            if ((w - x) < y)
                printf("%d\n", w - x);
            else
                printf("%d\n", y);
        }
    }
    return 0;
}