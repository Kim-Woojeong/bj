// 분수찾기

#include <stdio.h>

int main()
{
    int x, count = 0, a, b, num;
    scanf("%d", &x);

    while (x - (count + 1) > 0)
    {
        count++;
        x -= count;
    }

    a = count + 1; //분자
    b = 1;         // 분모

    for (int i = 0; i < x - 1; i++)
    {
        a--;
        b++;
    }

    if ((count + 1) % 2 == 0)
    { // 만약 짝수이면 분모 분자 교체
        num = a;
        a = b;
        b = num;
    }
    printf("%d/%d\n", a, b);

    return 0;
}