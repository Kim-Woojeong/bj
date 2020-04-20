#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%.9f\n", (double)x / y);

    return 0;
}