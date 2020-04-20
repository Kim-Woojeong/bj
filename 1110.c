#include <stdio.h>

int main(void)
{
    int x, a, b, c, d, tmp = 0, count = 0;
    scanf("%d", &x);
    tmp = x;

    while (1)
    {
        if (tmp < 10)
        {
            a = 0;
        }
        else
        {
            a = tmp / 10; // 4
        }

        b = tmp % 10; // 2
        c = a + b;    //6
        count++;
        tmp = b * 10 + c % 10; //62

        if (x == tmp)
        {
            break;
        }
    }
    printf("%d\n", count);

    return 0;
}