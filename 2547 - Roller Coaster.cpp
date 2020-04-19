#include <stdio.h>
int main()
{
    int N, Amin, Amax, i, hight;
    while(scanf("%d %d %d", &N, &Amin, &Amax)!=EOF)
    {
        int count=0;
        for(i=1; i<=N; i++)
        {
          scanf("%d", &hight);
          if(hight>=Amin && hight<=Amax)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

