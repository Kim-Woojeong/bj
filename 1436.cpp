// 영화감독 숌

#include <cstdio>

bool is_cons(int x)
{
    int a = 0;
    if (x < 666)
    {
        return false;
    }

    while (x > 0)
    {
        int num = x % 10;
        if (num == 6)
        {
            a++;
        }
        else
        {
            a = 0;
        }
        if (a >= 3)
        {
            return true;
        }

        x = x / 10;
    }
    return false;
}

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; true; i++)
    {
        if (is_cons(i))
        {
            sum++;
        }
        if (sum == n)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}