// 소수

#include <stdio.h>

int main(void)
{
    int M, N, sum = 0, min = 0;
    int i, j, arr[10000] = {
                  0,
              };

    arr[0] = 1, arr[1] = 1;
    for (j = 2; j < 10000 / 2; j++)
        for (i = j * j; i < 10000; i++)
            if (i % j == 0)
                arr[i] = 1;

    scanf("%d %d", &M, &N);

    for (i = M; i < N + 1; i++)
    {
        if (arr[i] == 0)
        {
            sum += i;
            if (min == 0)
                min = i;
        }
    }
    (sum == 0) ? printf("-1") : printf("%d\n%d\n", sum, min);
    return 0;
}