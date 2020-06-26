// 소수구하기

#include <stdio.h>

int main()
{
    int M, N, arr[1000000] = {
                  0,
              };

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i < 1000000 / 2; i++)
        for (int j = i * 2; j < 1000000; j++)
            if (j % i == 0)
                arr[j] = 1;

    scanf("%d %d", &M, &N);

    for (int i = M; i < N + 1; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}