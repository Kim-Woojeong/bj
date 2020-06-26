// insertionsort in c++

#include <cstdio>

int main()
{
    int a[] = {50, 20, 30, 10, 40};

    int i, j, k;
    int tmp;
    int n = 5;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && a[j] < a[j - 1]) // 오름차순으로 정렬
        {
            tmp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = tmp;
            j--;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}