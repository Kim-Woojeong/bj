// 수 정렬하기_2 (merge sort)

#include <cstdio>

void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    int b[1000001];

    // 값비교
    while (i <= mid && j <= high)
    {
        if (a[i] >= a[j])
        {
            b[k] = a[j];
            k++;
            j++;
        }
        else
        {
            b[k] = a[i];
            k++;
            i++;
        }
    }

    //왼쪽이 살아있다면
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    //오른쪽이 살아있다면
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    k--;

    // 문서작성
    while (k >= 0)
    {
        a[low + k] = b[k];
        k--;
    }
}

void mergesort(int a[], int low, int high)
{
    if (low < high)
    {
        int m = (low + high) / 2;

        mergesort(a, low, m);

        mergesort(a, m + 1, high);

        merge(a, low, m, high);
    }
}

int main()
{
    int n;
    int arr[1000001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}