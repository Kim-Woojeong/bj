// ACM 호텔
#include <stdio.h>

int main(void)
{
    int t; //테스트 케이스 갯수
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int h, w, n; // 높이, 너비, 손님 순위
        int a, b, cnt = 0;
        scanf("%d %d %d", &h, &w, &n);

        for (b = 1; b < w + 1; b++)
        {
            a = 0;
            while (a != h)
            {
                a++;
                cnt++;

                if (cnt == n)
                    printf("%d0%d\n", a, b);
                break;
            }
        }
    }
    return 0;
}