// 골드바흐의 추측

#include <cstdio>
#define SIZE 10001

int prime_chk[SIZE];

void is_prime()
{
    prime_chk[0]=1;
    prime_chk[1]=1;
    for(int i=2; i*i <SIZE; i++)
    {
        if(prime_chk[i] == 0)
        {
            for(int j=i*i; j<SIZE; j+=i)
            {
                prime_chk[j] = 1;
            }
        }
    }
}

int main()
{
    int n,x,a,b=2,front=0,back=0;

    is_prime(); // 소수생성
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x);
        a=2;

        while(a<=b)
        {
            b=x-a;

            if(prime_chk[a] == 0 && prime_chk[b] == 0)
            {
              front = a;
              back = b;
            }
        a++;
        }
        printf("%d %d\n", front, back);
    }

    return 0;
}