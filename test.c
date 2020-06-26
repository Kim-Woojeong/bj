#include <stdio.h>
#include <math.h>
int A[101];
int chk[101] = {
    0,
};
int B[101];

int solution(int arr[])
{
    int sum = 0;
    int num = 0;

    for (int i = 0; i < len(arr); i++)
    {
        chk[arr[i]]++;
    }

    for (int i = 0; i < 101; i++)
    {
        if (chk[i] > 1)
        {
            B[num] = chk[i];
            num++;
        }
    }
    if (num == 0)
    {
        return -1;
    }

    printf("%d")
}

int main()
{
    int i = 0;
    while (scanf("%d") != '0')
    {
        scanf("%d", &A[i]);
        i++;
    }

    int *nums = solution(A);
    printf("") return 0;
}