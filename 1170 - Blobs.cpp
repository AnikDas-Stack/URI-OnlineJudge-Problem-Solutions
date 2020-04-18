#include <stdio.h>
int main()
{
    int N, i, Day;
    double X;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        Day=0;
        scanf("%lf", &X);
        while(X>1)
        {
            X/=2;
            Day++;
        }
        printf("%d dias\n", Day);
    }
    return 0;
}

