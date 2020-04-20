#include <stdio.h>

int main()
{
    int x, y, day;
    scanf("%d %d", &x, &y);
    day = y % 7;

    if (x == 1 || x == 10)
    {
        if (day == 0)
            printf("SUN\n");
        else if (day == 1)
            printf("MON\n");
        else if (day == 2)
            printf("TUE\n");
        else if (day == 3)
            printf("WED\n");
        else if (day == 4)
            printf("THU\n");
        else if (day == 5)
            printf("FRI\n");
        else if (day == 6)
            printf("SAT\n");
    }
    else if (x == 2 || x == 3 || x == 11)
    {
        if (day == 0)
            printf("WED\n");
        else if (day == 1)
            printf("THU\n");
        else if (day == 2)
            printf("FRI\n");
        else if (day == 3)
            printf("SAT\n");
        else if (day == 4)
            printf("SUN\n");
        else if (day == 5)
            printf("MON\n");
        else if (day == 6)
            printf("TUE\n");
    }
    else if (x == 4 || x == 7)
    {
        if (day == 0)
            printf("SAT\n");
        else if (day == 1)
            printf("SUN\n");
        else if (day == 2)
            printf("MON\n");
        else if (day == 3)
            printf("TUE\n");
        else if (day == 4)
            printf("WED\n");
        else if (day == 5)
            printf("THU\n");
        else if (day == 6)
            printf("FRI\n");
    }
    else if (x == 5)
    {
        if (day == 0)
            printf("MON\n");
        else if (day == 1)
            printf("TUE\n");
        else if (day == 2)
            printf("WED\n");
        else if (day == 3)
            printf("THU\n");
        else if (day == 4)
            printf("FRI\n");
        else if (day == 5)
            printf("SAT\n");
        else if (day == 6)
            printf("SUN\n");
    }
    else if (x == 6)
    {
        if (day == 0)
            printf("THU\n");
        else if (day == 1)
            printf("FRI\n");
        else if (day == 2)
            printf("SAT\n");
        else if (day == 3)
            printf("SUN\n");
        else if (day == 4)
            printf("MON\n");
        else if (day == 5)
            printf("TUE\n");
        else if (day == 6)
            printf("WED\n");
    }
    else if (x == 8)
    {
        if (day == 0)
            printf("TUE\n");
        else if (day == 1)
            printf("WED\n");
        else if (day == 2)
            printf("THU\n");
        else if (day == 3)
            printf("FRI\n");
        else if (day == 4)
            printf("SAT\n");
        else if (day == 5)
            printf("SUN\n");
        else if (day == 6)
            printf("MON\n");
    }
    else if (x == 9 || x == 12)

    {
        if (day == 0)
            printf("FRI\n");
        else if (day == 1)
            printf("SAT\n");
        else if (day == 2)
            printf("SUN\n");
        else if (day == 3)
            printf("MON\n");
        else if (day == 4)
            printf("TUE\n");
        else if (day == 5)
            printf("FRI\n");
        else if (day == 6)
            printf("THU\n");
    }

    return 0;
}