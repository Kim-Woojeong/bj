// 소수찾기

#include <stdio.h>

int main(void)
{
    int i, j, arr[1000] = {
                  0,
              };
    int n, num, cnt = 0;

    arr[0] = 1, arr[1] = 1; // 0과 1은 소수가 아니므로 제외함.

    for (j = 2; j < 1000 / 2; j++) // 2~999
                                   // 4,5,6,7,8,,,999 / 6,7,8,9,,,999 / 8,9,10,11,,,999 /
        for (i = j * 2; i < 1000; i++)
            if (i % j == 0)
                arr[i] = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (arr[num] == 0)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}