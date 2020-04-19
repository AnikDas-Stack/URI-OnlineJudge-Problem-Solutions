
#include <stdio.h>
int main()
{
    int N, Q, d, i, a, b, temp, c;
    while(scanf("%d %d", &N, &Q)!=EOF)
    {
        int ara[N];
        for(i=1; i<=N; i++)
        {
            scanf("%d", &ara[i]);
        }
        for(a=1; a<=N-1; a++)
        {
            for(b=1; b<=N-1; b++)
            {
                if(ara[b+1]>ara[b])
                {
                    temp=ara[b];
                    ara[b]=ara[b+1];
                    ara[b+1]=temp;
                }
            }
        }
        for(c=1; c<=Q; c++)
        {
            scanf("%d", &d);
            printf("%d\n", ara[d]);
        }
    }
    return 0;
}
