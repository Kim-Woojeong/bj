// 분해합 (복습 ) 최대한 답안코드 보지말고 셀프 피드백하기

#include <cstdio>

int sum_num(int x)
{
    int sum = 0;
    sum += x;
    if (x < 10) // 여기생략하면 안되나
    {
        sum += x;
        return sum;
    }
    while (1)
    {
        if (x >= 10)
        {
            int num = x % 10;
            sum += num;
            x = x / 10;
        }
        else
        {
            sum += x;
            return sum;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (sum_num(i) == n)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}