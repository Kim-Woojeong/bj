// 달팽이는 올라가고 싶다 (시간초과)

#include <stdio.h>

int main()
{
    int a, b, v, day = 0;
    scanf("%d %d %d", &a, &b, &v);

    while (1)
    {
        day++;
        v -= a;
        if (0 >= v)
            break;
        v += b;
    }

    printf("%d\n", day);
    return 0;
}