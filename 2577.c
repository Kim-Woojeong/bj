#include <stdio.h>

int main(void)
{
    int x, y, z, res;
    int count[10] = {0};
    scanf("%d %d %d", &x, &y, &z);
    res = x * y * z;

    while(res){
        count[res%10]++;
        res /= 10;
    }

    for(int i=0; i<10; i++){
        printf("%d\n", count[i]);
    }

    return 0;
}