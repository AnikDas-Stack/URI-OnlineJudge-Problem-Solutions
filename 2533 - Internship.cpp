
#include <stdio.h>
int main()
{
    int M;
    while(scanf("%d", &M)!= EOF)
    {
        int i, N, C, sum_1=0, sum_2=0;
        for(i=1; i<=M; i++)
        {
            scanf("%d %d", &N, &C);
            sum_1+=(N*C);
            sum_2+=C;
        }
        double r;
        r=(double)sum_1/(sum_2*100);
        printf("%.4lf\n", r);
    }
    return 0;
}
