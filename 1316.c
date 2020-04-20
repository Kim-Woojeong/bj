// 그룹단어체커
// 소스코드 출처) https://dailycodingpractice.tistory.com/10

#include <stdio.h>
#include <string.h>

int main()
{
    int N, group = 0, cnt = 0;
    char S[101], room = 'A', S2[101];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", S);
        for (int j = 0; j < strlen(S); j++)
        {
            for (int k = 'a'; k <= 'z'; k++)
            {
                if (S[j] == k)
                {
                    if (S[j] != S[j + 1])
                    {
                        cnt++;
                        S2[cnt - 1] = S[j];
                    }
                    break;
                }
            }
        }
        for (int j = 0; j < cnt; j++)
        {
            for (int k = j + 1; k < cnt; k++)
            {
                if (S2[j] == S2[k])
                {
                    room = S2[k];
                    break;
                }
            }
            if (S2[j] == room)
                break;
            if (j == cnt - 1)
                group += 1;
        }
        cnt = 0;
        room = 'A';
    }
    printf("%d", group);
}