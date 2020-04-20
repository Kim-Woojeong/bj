#include <stdio.h>

int main(void)
{
    int x, y, a, b, c, d;
    scanf("%d %d", &x, &y);
    a = x * (y % 10);
    y = y / 10;
    b = x * (y % 10);
    y = y / 10;
    c = x * (y % 10);
    d = a + b * 10 + c * 100;
    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
}