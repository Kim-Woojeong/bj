// 덩치

#include <cstdio>
int arr[50][2];

int main()
{
    int N, x, y, cnt;
    int arr[50][2];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for (int i = 0; i < N; i++)
    {
        cnt = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                cnt++;
        }
        printf("%d ", ++cnt);
    }
    return 0;
}