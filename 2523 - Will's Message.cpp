#include <stdio.h>
#include <string.h>
int main()
{
    char line[26];
    int N, I, A;
    while(scanf("%s", line)!=EOF)
    {
        scanf("%d", &N);
        for(A=0; A<N; A++)
        {
            scanf("%d", &I);
            printf("%c", line[I-1]);
        }
         printf("\n");
    }

    return 0;
}

