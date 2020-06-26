// 소수 찾기

#include <stdio.h>

int main()
{
    int arr[1000] = {
        0,
    };
    int n, num, cnt = 0;

    arr[0] = 1; // 소수가 아니면 1로 변경
    arr[1] = 1;

    for (int i = 2; i < 1000; i++)
    {
        for (int j = 2 * i; j < 1000; j++)
        {
            if (j % i == 0) // 만약 j가 i의 배수라면
                arr[j] = 1;
        }
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (arr[num] == 0)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}