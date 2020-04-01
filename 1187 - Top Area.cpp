#include <stdio.h>

int main() {

double a=0.0, M[12][12];
    int x=10, i, j, p=1;
    char T[2];
    scanf("%s", &T);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
            scanf("%lf", &M[i][j]);
    }
    for(i=0; i<=4; i++)
    {
         for(j=p; j<=x;j++)
        a+=M[i][j];
        x--, p++;
    }
    if(T[0]=='S')
        printf("%.1lf\n", a);
    else if(T[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
