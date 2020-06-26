#include <cstdio>
#define size 10001

int cnt[size] = {
    0,
};

int main()
{
    // int cnt[size] = {
    //     0,
    // };
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        cnt[num]++;
    }

    for (int i = 0; i <= size; i++)
    {
        if (cnt[i] == 0)
            continue;
        for (int j = 0; j < cnt[i]; j++)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}