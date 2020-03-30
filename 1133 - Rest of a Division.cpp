#include <stdio.h>

int main() {

    int X, Y, I;
    scanf("%d %d", &X, &Y);

    if(X<Y)
    {
        for(I=X+1; I<Y; I++)
        {
            if(I%5==2 || I%5==3)
            {
                printf("%d\n", I);
            }
        }
    }
    if(Y<X)
    {
         for(I=Y+1; I<X; I++)
         {
            if(I%5==2 || I%5==3)
            {
                printf("%d\n", I);
            }
         }
    }

    return 0;
}
