#include <stdio.h>
#include <math.h>

int main()
{
    int N, i;
    while(scanf("%d", &N)!=EOF)
    {
        int cnt=0;
        for(i=N; i>0; i/=2)
        {
            if(N%2==0)
                cnt++;
        }
        if(N==0 || N==1)
            printf("%d\n", cnt);
        else
            printf("%d\n", cnt-1);

    }

    return 0;
}

