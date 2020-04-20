//그룹단어체커

#include <string.h>
#include <stdio.h>

int main(void)
{
    int n, cnt = 0;
    char word[101];
    char chk[27];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);

        for (int j = 0; j < strlen(word); j++)
        {
            if (word[j] == word[j + 1])
                continue;
            else
            {

                if (chk[word[j] - 'a'] != 0)
                    chk[word[j] - 'a'] = 1;
                else
                {
                    break;
                }
            }
        }
    }
}