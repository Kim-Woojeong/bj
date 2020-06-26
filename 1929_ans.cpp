// 소수 구하기

#include <stdio.h>

int main()
{
    int i, j, m, n;
    int arr[1000001] = {0, 1};
    scanf("%d %d", &m, &n);
    for (i = 2; i <= n; i++)
        for (j = 2; i * j <= n; j++)
            arr[i * j] = 1;

    for (i = m; i <= n; i++)
        if (!arr[i])
            printf("%d\n", i);

    return 0;
}