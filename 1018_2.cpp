// 체스판 (백지 복습)

#include <cstdio>
int n, m; // n=y, m=x;
char arr[51][51];

void make_matrix()
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
}

int chk(int y, int x, int sw)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            int yy = y + i;
            int xx = x + j;
            int now = arr[yy][xx];

            if (sw == 0) // if white
            {
                if (now == 'B')
                    count++;
            }
            else // if black
            {
                if (now == 'W')
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
    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            int w_min = chk(i, j, 0);
            int b_min = chk(i, j, 1);

            if (w_min < min)
                min = w_min;
            if (b_min < min)
                min = b_min;
        }
    }
    printf("%d\n", min);
    return 0;
}
