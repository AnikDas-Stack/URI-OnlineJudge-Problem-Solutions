#include <stdio.h>
#include <string.h>
int main()
{
    int test, length;
    char name[10100];
    scanf("%d", &test);
    while(test--)
    {
        scanf("%s", &name);
        length = strlen(name);
        printf("%.2lf\n", length*0.01);
    }
    return 0;
}

