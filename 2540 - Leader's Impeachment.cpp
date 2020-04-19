#include <stdio.h>
int main()
{
    int N, i, v, sum=0;
    double part;
    while(scanf("%d", &N)!=EOF)
    {
        sum=0;
        part =(double) (N*2)/3;
        for(i=1; i<=N; i++)
        {
           scanf("%d", &v);
           if(v==0 || v==1)
           {
               sum+=v;
           }

        }

        if(sum>=part)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }

    }
    return 0;
}

