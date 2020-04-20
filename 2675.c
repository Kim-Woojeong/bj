#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int rep;
        char word[20];
        scanf("%d %s", &rep, word);
        for (int j = 0; j < strlen(word); j++)
        {
            for (int k = 0; k < rep; k++)
                printf("%c", word[j]);
        }
        printf("\n");
    }
    return 0;
}