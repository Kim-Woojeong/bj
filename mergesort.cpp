// merge sort in c++

#include <cstdio>
#define max 6

// conquer - 서열정리
void merge(int a[], int low, int mid, int high)
{
    int b[1000];
    int i = low;
    int j = mid + 1;
    int k = 0;

    // printf("[in merge] low = %d mid = %d high = %d ", low, mid + 1, high);

    //한쪽이 전멸할 때까지
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    // 왼쪽이 살아있다면
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }

    // 오른쪽이 살아있다면
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    k--;

    //문서작성
    while (k >= 0)
    {
        a[low + k] = b[k];
        k--;
    }
}

// divide - 대진표작성
void mergesort(int a[], int low, int high)
{
    //exit condition
    if (low < high)
    {

        int m = (low + high) / 2;

        //left
        // printf("\n left low = %d mid = %d ", low, m);
        mergesort(a, low, m);

        // right
        // printf("\n right m+1 = %d high = %d ", m + 1, high);
        mergesort(a, m + 1, high);

        //fight
        // printf("\n merge!!! low = %d m+1 = %d high = %d ", low, m, high);
        merge(a, low, m, high);
    }
}

int main()
{
    int a[max] = {20, 10, 70, 80, 40, 90};

    printf("\nbefore merge ");
    for (int i = 0; i < max; i++)
    {
        printf("%d ", a[i]);
    }

    mergesort(a, 0, max - 1);

    for (int i = 0; i < max; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}