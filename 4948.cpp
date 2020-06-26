// with J.H

#include <cstdio>
#define SIZE 246913

int prime_chk[SIZE];

void is_prime()
{
    prime_chk[0] = 1;
    prime_chk[1] = 1;
    for (int i = 2; i * i < SIZE; i++)
    {
        if (prime_chk[i] == 0)
        {
            for (int j = i * i; j < SIZE; j += i) // 소수가 아닐때
            {
                prime_chk[j] = 1;
            }
        }
    }
}

int main()
{
    int n;
    is_prime();
    while (1)
    {
        int cnt = 0;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        for (int i = n + 1; i <= 2 * n; i++) //n보다 크고, 2n보다 작거나 같은 소수의 개수 출력
        {
            if (prime_chk[i] == 1)
            {
                continue;
            }
            else
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}