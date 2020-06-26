#include <cstdio>
#define max 10000001
#define nummax 100001

void countingSort(int arr[], int num);
int *counting(int arr[]);
int *sumCounting(int arr[]);
int *sorting(int arr[], int num);

int *counting(int arr[])
{
    static int res1[nummax] = {};
    for (int i = 0; i < max; i++)
    {
        res1[arr[i]]++;
    }
    return res1;
}

int *sumCounting(int arr[])
{
    static int res2[nummax] = {};
    int sum = 0;
    for (int i = 0; i < nummax; i++)
    {
        if (arr[i] != 0)
        {
            sum += arr[i];
            res2[i] = sum;
        }
    }
    return res2;
}

int *sorting(int arr[], int num)
{
    static int res3[max] = {};
    int j = 0;
    for (int i = 0; i < nummax; i++)
    {
        if (arr[i] != 0)
        {
            while (j != arr[i])
            {
                res3[j] = i;
                j++;
            }
        }
    }
    return res3;
}

void countingSort(int arr[], int num)
{

    // int sortedArr[max] = {};
    // int sum[nummax] = {0};
    // int countingArr[nummax] = {};

    int *countingArr = counting(arr);
    int *sum = sumCounting(countingArr);
    int *sortedArr = sorting(sum, num);

    arr = sortedArr;
}

int main()
{
    int n;
    int arr[10000001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}