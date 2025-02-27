// 하노이 탑 이동 순서

#include <cstdio>
#include <cmath>

void hanoi(int n, int from, int by, int to)
{
    if (n == 1)
        printf("%d %d\n", from, to);
    else
    {
        hanoi(n - 1, from, to, by);
        printf("%d %d\n", from, to);
        hanoi(n - 1, by, from, to);
    }
}

int main()
{
    int n, min, A, B;
    scanf("%d", &n);

    min = pow(2, n) - 1;
    printf("%d\n", min);

    hanoi(n, 1, 2, 3);
    return 0;
}