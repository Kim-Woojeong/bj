#include <cstdio>
#define max 10000001
#define nummax 100001
// 함수 호출이 서로 물고 물리는 대부분의 경우에 먼저 함수 원형을 적어 주는 것이 권장됨.
int *countingSort(int arr4[]);
int *counting(int arr1[]);
int *sumCounting(int arr2[]);
int *sorting(int arr3[]);
int arr[max];
// int res[max];

static int res1[nummax] = {};
static int res2[nummax] = {};
static int res3[max] = {};

int *counting(int arr1[])
{

    for (int i = 0; i < nummax; i++)
    {
        res1[arr1[i]]++;
    }
    return res1;
}

int *sumCounting(int arr2[])
{
    int sum = 0;
    for (int i = 0; i < nummax; i++)
    {
        if (arr2[i] != 0)
        {
            sum += arr2[i];
            res2[i] = sum;
        }
    }
    return res2;
}

int *sorting(int arr3[])
{

    int j = 0;
    for (int i = 0; i < nummax; i++)
    {
        if (arr3[i] != 0)
        {
            while (j != arr3[i])
            {
                res3[j] = i;
                j++;
            }
        }
    }
    return res3;
}

int *countingSort(int arr4[])
{
    // 초깃값이 주어지지 않는다면 쓰레기 값이 들어가므로

    //최종적으로 정렬된 배열
    // int sortedArr[max] = {};
    // //누적합 저장 배열
    // //첫번째 요소를 0으로 초기화하지만 나머지 요소들도 규칙에 의하여 0이 된다.
    // int sum[nummax] = {0};
    // // 각 숫자가 몇번씩 나왔는지 저장 배열
    // int countingArr[nummax] = {};

    int *countingArr = counting(arr4);
    int *sum = sumCounting(countingArr);
    int *sortedArr = sorting(sum);

    arr4 = sortedArr;
    return arr4;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countingSort(arr);

    printf("after sorting\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}