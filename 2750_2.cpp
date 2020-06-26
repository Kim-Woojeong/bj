// 수 정렬하기_selection sort

#include <cstdio>

int main()
{
    int n, min, flag, tmp;
    int arr[1001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
                flag = 1;
            }
        }

        if (flag == 1)
        {
            tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
        flag = 0;
    }

    // printf("----------");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}