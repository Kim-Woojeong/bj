// 단어의 개수
#include <stdio.h>
#define MAX 1000001

int main()
{
    char arr[MAX];
    int num = 1; // 단어의 갯수
    int i = 0;
    gets(arr); // 띄어쓰기 포함해서 문자열 받음

    while (arr[i] != '\0')
    {
        if (arr[i] == ' ' && arr[i + 1] != '\0')
            num++;
        i++;
    }

    if (arr[0] == '\0' || arr[0] == ' ') // 아무것도 입력하지x or 맨 앞에 공백입력
        num--;
    printf("%d\n", num);
}
