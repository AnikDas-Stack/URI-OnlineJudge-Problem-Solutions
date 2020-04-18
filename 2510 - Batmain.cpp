#include <stdio.h>
#include <string.h>
int main()
{
    int T, i, ln;
    char line[100];
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%s", line);

        ln= strlen(line);

        if(ln>=0 && ln<=25)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}

