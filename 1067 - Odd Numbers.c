#include <stdio.h>

int main() {

    int X, I;
    scanf("%d", &X);
    for(I=1; I<=X; I++)
    {
        if(I%2!=0)
        printf("%d\n", I);
    }


    return 0;
}
