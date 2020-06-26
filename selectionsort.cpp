// selection sort in c++

#include <cstdio>

int main()
{

    int a[] = {10, 20, 50, 30, 40};
    int n = 5;
    int tmp, min, flag;

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }

    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        // find minimum number
        for (int j = i + 1; j < n; j++)
        {
            // minimum is bigger
            if (a[min] > a[j])
            {
                min = j;
                // 진짜로 작은것들만 swap해주기 위함.
                flag = 1;
            }
        }

        // swap
        if (flag == 1)
        {
            tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
        }
        flag = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}