#include <stdio.h>

int main(void)
{
    int num, max = 0;
    double avg, sum = 0;
    scanf("%d", &num);
    double score[1000] = {};

    for (int i = 0; i < num; i++)
    {
        scanf("%lf", &score[i]);
        if (score[i] > max)
        {
            max = score[i];
        }
    }

    for (int i = 0; i < num; i++)
    {
        score[i] = (score[i] / max) * 100;
        sum += score[i];
    }
    avg = sum / num;
    printf("%.2lf\n", avg);

    return 0;
}