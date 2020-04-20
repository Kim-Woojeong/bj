#include <stdio.h>
#include <string.h>

int main(void)
{
    int x; // 테스트 케이스 개수

    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        char num[80] = {};

        scanf("%s", num);

        int count = 0;
        int sum = 0;

        for (int j = 0; j < strlen(num); j++)
        {

            if (num[j] == 'O')
            {
                count++;
                sum += count;
            }
            else
            {
                count = 0;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}