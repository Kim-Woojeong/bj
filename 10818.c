#include <stdio.h>

int main(void)
{
    int x, num, min = 1000001, max = -1000001;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &num);
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    printf("%d %d\n", min, max);

    return 0;
}