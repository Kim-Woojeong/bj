// 수 정렬하기 2 in quicksort

#include <cstdio>
#include <cmath>
#define max 1000001

int Partition(int a[], int start, int end)
{
    int pivot = a[end];
    int index = start;
    int tmp;

    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            tmp = a[i];
            a[i] = a[index];
            a[index] = tmp;
            index++;
        }
    }

    tmp = a[index];
    a[index] = a[end];
    a[end] = tmp;

    return index;
}

void Quicksort(int a[], int start, int end)
{
    int index;

    if (start < end)
    {
        index = Partition(a, start, end);
        Quicksort(a, start, index - 1);
        Quicksort(a, index + 1, end);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000001];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    Quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
