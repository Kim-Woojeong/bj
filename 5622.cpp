#include <stdio.h>

int main()
{
    int num = 0;
    char word[16];
    scanf("%s", word);

    // 'A'는 아스키코드 65, 'a'는 아스키코드 97
    for (int i = 0; word[i]; i++)
    {
        if ('A' <= word[i] && word[i] <= 'C')
            num += 3;
        else if ('D' <= word[i] && word[i] <= 'F')
            num += 4;
        else if ('G' <= word[i] && word[i] <= 'I')
            num += 5;
        else if ('J' <= word[i] && word[i] <= 'L')
            num += 6;
        else if ('M' <= word[i] && word[i] <= 'O')
            num += 7;
        else if ('P' <= word[i] && word[i] <= 'S')
            num += 8;
        else if ('T' <= word[i] && word[i] <= 'V')
            num += 9;
        else if ('W' <= word[i] && word[i] <= 'Z')
            num += 10;
    }
    printf("%d\n", num);
}
// #include<cstdio>
// int c, s;
// int main(){

// 	while((c = getchar()) - 0x0a){
// 		for(int a : "aaADGJMPTW") s += c >= a;
// 		++s;
// 	}
// 	printf("%d", s);
// }