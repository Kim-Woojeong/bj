// 피보나치 수

#include <cstdio>

int main()
{
    int n, a = 0, b = 1, c, cnt = 0;

    scanf("%d", &n);

    if (n == 1)
        printf("%d\n", b);
    else
    {
        while (n != cnt)
        {
            c = a + b;
            a = b;
            b = c;
            cnt++;
        }
        printf("%d\n", a);
    }
    return 0;
}