#include <stdio.h>

int main(void)
{
    int num[100] = {};   // 입력받은 수를 저장하는 배열
    int rest[100] = {0}; // 42로 나눈 나머지를 저장하는 배열
    int sum = 0;         // 서로다른 나머지의 개수

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        rest[num[i] % 42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (rest[i] != 0)
            sum++;
    }
    printf("%d\n", sum);

    return 0;
}