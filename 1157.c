#include <stdio.h>
#define MAX 1000001

int main()
{
    char word[MAX];
    int num[27] = {};
    int max, max_index = 0;

    scanf("%s", word);

    // 'A'는 아스키코드 65, 'a'는 아스키코드 97
    for (int i = 0; word[i]; i++) /**point**/
    {
        // 소문자일경우 대문자로 바꿔줌
        if (word[i] >= 'a')
            word[i] -= ('a' - 'A');
        num[word[i] - 'A']++; // 나타난 문자 개수 증가 ** point **
    }

    max = num[0];
    //제일 큰 수 찾아서 최댓값으로 저장
    for (int i = 1; i < 26; i++)
    {
        if (max < num[i])
        {
            max = num[i];
            max_index = i;
        }
        else if (max == num[i] && num[i] != 0) // ** point **
        {
            max_index = -1;
        }
    }

    if (max_index != -1)
        printf("%c\n", 'A' + max_index);
    else
    {
        printf("?\n");
    }

    return 0;
}