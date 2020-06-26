// 분해합

#include <cstdio>

int sum_num(int num)
{
    int sum = 0;
    sum += num;

    while (true)
    {
        if (num < 10)
        {
            sum += num;
            break;
        }
        else // num >= 10
        {
            sum += num % 10;
            num = num / 10;
        }
    }
    return sum;
}

int main()
{
    int n, res;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int res = sum_num(i);
        if (res == n)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
