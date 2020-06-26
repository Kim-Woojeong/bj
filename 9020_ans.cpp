// 골드바흐의 추측

#include <stdio.h>

int main()
{
    int cnt, N;
    int i, j, arr[10001] = {0, 1};

    for (j = 2; j < 10001 / j; j++)
    {
        if (!arr[j])
        {
            for (i = j * j; i < 10001; i += j)
                if (i % j == 0)
                    arr[i] = 1;
        }
    }

    scanf("%d", &cnt);
    while (cnt--)
    {
        scanf("%d", &N);
        for (i = N / 2; i > 1; i--)
        {
            if (arr[i] == 1)
                continue;
            for (j = N / 2; j <= N; j++)
            {
                if (arr[j] == 1)
                    continue;
                if (i + j == N)
                    goto OUT;
            }
        }
    OUT:
        printf("%d %d\n", i, j);
    }
    return 0;
}