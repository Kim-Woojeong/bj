// 별찍기 10

#include <cstdio>
int arr[2188][2188];

void foo(int n, int y, int x)
{
    if (n == 1) // 종료조건
        return;

    // 9등분해서 다섯번째 정사각형 1로 만들기
    else
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == 1 && j == 1)
                {
                    // 1만들기
                    for (int k = 0; k < (n / 3); k++)
                    {
                        for (int l = 0; l < (n / 3); l++)
                        {
                            arr[y + k + (n / 3)][x + l + (n / 3)] = 1;
                        }
                    }
                }
                else
                {
                    foo(n / 3, y + i * (n / 3), x + j * (n / 3));
                }
            }
        }
    }
}

int main()
{
    int n, x = 0, y = 0;
    scanf("%d", &n);

    foo(n, y, x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
                printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}