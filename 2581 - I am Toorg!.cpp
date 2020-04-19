#include <stdio.h>
int main()
{
    char line[1000];
    int N, i;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        getchar();
        gets(line);
        printf("I am Toorg!\n");
    }
    return 0;
}

