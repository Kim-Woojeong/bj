#include <stdio.h>

#define N 10001

int arr[N];

int d(int x) //d(33) 실행시키면 39 리턴 > 33은 39의 생성자
{
    int result = x;
    while (x != 0)
    {
        result += x % 10;
        x = x / 10;
    }
    return result;
}

int main(void)
{
    // 1부터 10000까지의 수 생성
    for (int i = 0; i < N; i++)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < N; i++)
    {
        int num = d(i); // 생성자를 가지는 어떤 수 구하기
        if (num <= N)
            arr[num] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}