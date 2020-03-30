#include <stdio.h>

int main() {

   int I=1, X, Y;
    for(;I<=10; I++)
    {
        scanf("%d %d", &X, &Y);
        if(X==Y)
            break;
        else if(X<Y)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
    }

    return 0;
}
