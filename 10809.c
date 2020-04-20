#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101]; // 입력받을 문자열을 저장할 배열 
    int arr[101]; // 알파벳 순서를 저장할 배열 

    scanf("%s", s);

    for (int i = 0; i < 26; i++)
    {
        arr[i] = -1;
    }

    // 입력받은 문자열속의 문자를 앞에서부터 분석
    for (int i = 0; i < strlen(s); i++)
    {
        if(arr[s[i] - 'a'] == -1)
            arr[s[i] - 'a'] = i;
            
    }

    for (int i = 0; i < 26; i++)
        printf("%d ", arr[i]);

    return 0;
}