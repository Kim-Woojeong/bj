// 터렛

#include <cstdio>
#include <cmath>

int main()
{
    int t; // 테스트케이스 개수
    int x1, y1, r1, x2, y2, r2;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        if (x1 == x2 && y1 == y2 && (r1 + r2) != x1)
        {
            printf("0\n");
        }
        else if (x1 == x2 && y1 == y2 && r1 == 0 && r2 == 0)
        {
            printf("-1\n");
        }
        else
        {
            if (pow(r1 + r2, 2) > pow(x1 - x2, 2) + pow(y1 - y2, 2))
            {
                printf("2\n");
            }
            else if (pow(r1 + r2, 2) == pow(x1 - x2, 2) + pow(y1 - y2, 2))
            {
                printf("1\n");
            }
        }
    }
    return 0;
}