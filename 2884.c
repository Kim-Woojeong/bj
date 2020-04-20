#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    if (M >= 45)
    {
        M = M - 45;
    }
    else
    {
        M = M + 15;
        if (H == 0)
        {
            H = 23;
        }
        else
        {
            H = H - 1;
        }
    }
    printf("%d %d\n", H, M);
    return 0;
}