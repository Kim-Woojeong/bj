// 한수
#include <stdio.h>

int han(int n)
{
    int i, one, ten, hundred, count = 0;

    if (n < 100)
        return n;
    else
    {
        for (i = 100; i <= n; i++)
        {
            one = i % 10;
            ten = (i / 10) % 10;
            hundred = i / 100;
            if (one - ten == ten - hundred)
            {
                count++;
            }
        }
        return (99 + count);
    }
}

int main(void)
{
    int x, res;
    scanf("%d", &x);
    res = han(x);
    printf("%d\n", res);

    return 0;
}