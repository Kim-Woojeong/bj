// 복습용

#include <cstdio>
char arr[51][51];
int n, m; // n=y, m=x;

void make_matrix()
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
}

int miss_chk(int y, int x, int sw)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            int yy = y + i;
            int xx = x + j;
            char now = arr[yy][xx];
            if (sw == 0)
            {
                if (now != 'W')
                    count++;
            }
            else
            {
                if (now != 'B')
                    count++;
            }
            sw = !sw;
        }
        sw = !sw;
    }
    return count;
}

int main()
{
    scanf("%d %d", &n, &m);

    make_matrix();

    int min = 2501;
    for (int i = 0; i < n - 8; i++)
    {
        for (int j = 0; j < m - 8; j++)
        {
            int miss_w = miss_chk(i, j, 0);
            int miss_b = miss_chk(i, j, 1);

            if (min > miss_w)
            {
                min = miss_w;
            }
            if (min > miss_b)
            {
                min = miss_b;
            }
        }
        printf("%d\n", min);

        return 0;
    }
}