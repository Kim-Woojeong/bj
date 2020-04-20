// 크로아티아 알파벳
#include <string.h>
#include <stdio.h>

int main()
{
    char word[101];
    scanf("%s", word);
    int cnt = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        char chk = word[i];
        // if (word[i] == NULL)
        //     break;

        if (chk == 's' || chk == 'z')
        {
            if (word[i + 1] == '=')
                continue;
        }
        else if (chk == 'c')
        {
            if (word[i + 1] == '-' || word[i + 1] == '=')
                continue;
        }
        else if (chk == 'n' || chk == 'l')
        {
            if (word[i + 1] == 'j')
                continue;
        }
        else if (chk == 'd')
        {
            if (word[i + 1] == '-')
                continue;
            else if (word[i + 1] == 'z' && word[i + 2] == '=')
                continue;
        }
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}