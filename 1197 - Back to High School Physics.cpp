#include <stdio.h>
int main()
{
    int v, t;
    while(scanf("%d %d", &v, &t)!=EOF)
    {
        int result= (v*t)*2;
        printf("%d\n", result);
    }
    return 0;
}

