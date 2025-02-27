#include <stdio.h>

int main(void)
{
    int x, y, total_day = 0;
    scanf("%d %d", &x, &y);
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 1; i < x; i++)
    {
        total_day += month_days[i - 1];
    }
    total_day += y;

    switch (total_day % 7)
    {
    case 0:
        printf("SUN\n");
        break;
    case 1:
        printf("MON\n");
        break;
    case 2:
        printf("TUE\n");
        break;
    case 3:
        printf("WED\n");
        break;
    case 4:
        printf("THU\n");
        break;
    case 5:
        printf("FRI\n");
        break;
    case 6:
        printf("SAT\n");
        break;
    }
}