// 택시 기하학

#include <cstdio>
#define PI 3.14159265359

int main()
{
    int r;
    double u, t;

    scanf("%d", &r);

    u = (double)r * r * PI;
    t = (double)r * r * 2;

    printf("%.6f\n%.6f\n", u, t);
    return 0;
}