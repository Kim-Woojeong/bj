// 수 정렬하기_삽입 정렬 이용

#include <cstdio>

int main()
{
    int n, tmp;
    int arr[1001] = {
        0,
    };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                for (int k = i; k >= j; k--)
                {
                    arr[k] = arr[k - 1];
                }
                arr[j] = tmp;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}