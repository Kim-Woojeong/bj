#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
        printf(">\n");
    else if (x < y)
        printf("<\n");
    else
        printf("==\n");

    return 0;
}