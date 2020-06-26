// practice quick sort

#include <cstdio>
#include <cmath>
#define max 10

int Partition(int a[], int start, int end)
{
    int index = start;
    int pivot = a[end];
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
    else
    {
        return;
    }
}

int main()
{
    int arr[max] = {40, 30, 100, 60, 80, 70, 90, 10, 20, 50};

    Quicksort(arr, 0, max - 1);

    for (int i = 0; i < max; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}