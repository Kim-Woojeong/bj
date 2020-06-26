// bubble sort in c

#include <stdio.h>

int main()
{
    int a[] = {20, 40, 50, 10, 30};
    int n = 5;
    int tmp;

    // loop part
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            // swap part
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}