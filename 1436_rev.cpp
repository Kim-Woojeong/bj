// 영화감독 숌 (복습) 최대한 답안코드 보지말고 셀프 피드백하기

#include <cstdio>

bool is_cons(int y)
{
    int a = 0;
    if (y < 666)
        return false;
    else
    {
        // 일의자리씩 6의 연속성을 검사하기
        while (y > 0)
        {
            int num = y % 10;
            if (num == 6)
                a++;
            else
            {
                a = 0;
            }

            if (a >= 3)
                return true;
            y = y / 10;
        }
        return false;
    }
}

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 1; true; i++)
    {
        if (is_cons(i))
        {
            count++;
        }
        if (count == n)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}