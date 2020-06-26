// 소수

#include <stdio.h>

int main()
{
    // 최솟값 : 여러 수들을 비교할 필요없이 제일 먼저 들어오는 수가 최솟값이 됨.
    int M, N, sum = 0, min = 0;
    int arr[10000] = {
        0,
    };
    arr[0] = 1; // 소수가 아님.
    arr[1] = 1;
    scanf("%d %d", &M, &N);

    // 1~10,000 중에서 소수 판별하기
    for (int j = 2; j < 10000 / 2; j++)
        for (int i = j * 2; i < 10000; i++)
            if (i % j == 0) // 어떤수의 배수라면 소수에서 제외
                arr[i] = 1;

    // 입력받은 범위 내의 소수의 합과 최솟값 판별하기
    for (int i = M; i < N + 1; i++)
    {
        if (arr[i] == 0) // 어떠한 수가 소수라면
        {
            sum += i;
            if (min == 0)
                min = i;
        }
    }
    if (sum == 0) // 주어진 범위내에 소수가 하나도 없다면
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, min);

    return 0;
}