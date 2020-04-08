#include <stdio.h>
int main()
{
    int N, i, j, flag=0;
    scanf("%d", &N);
    int R[N];
    for(i=1; i<=N; i++)
    {
        scanf("%d", &R[i]);
    }
    for(j=1; j<N; j++)
    {
        if(R[j]<=R[j+1])
        {
            flag=1;
            continue;
        }

        else
        {
           printf("%d\n", j+1);
           flag=0;
            break;
        }
    }
    if(flag==1)
        printf("0\n");
    return 0;

}

