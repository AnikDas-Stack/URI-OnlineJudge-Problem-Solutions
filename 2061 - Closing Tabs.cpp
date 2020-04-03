#include <stdio.h>
int main()
{
    int N, M, i;
    char a[7];
    scanf("%d %d", &N, &M);
    for (i=1; i<=M; i++)
    {
        scanf("%s", &a);
        if(a[0]=='f')
        {
            N--;
            N=N+2;
        }
        else
            N--;

    }
    printf("%d\n", N);

    return 0;
}

