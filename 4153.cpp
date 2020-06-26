// 직각삼각형

#include<cstdio>
#include<cmath>

int main()
{
    int x,y,z;
    int a,b,c;

    while(1)
    {
        scanf("%d %d %d", &x, &y, &z);
        if(x == 0 && y == 0 && z == 0)
            break;
        else
        {
            a = x*x;
            b = y*y;
            c = z*z;

            if(a==b+c || b==a+c || c==a+b)
                printf("right\n");
            else
                printf("wrong\n");
        }
    }

    return 0;
}