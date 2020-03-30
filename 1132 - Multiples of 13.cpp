#include <stdio.h>

int main() {

    int X, Y, I, SUM=0;
    scanf("%d %d", &X, &Y);

    if(X<Y)
    {

        for(I=X; I<=Y; I++)
        {
           if(I%13!=0)
           {
              SUM=SUM+I;
           }
        }
    }
    if(Y<X)
    {
      for(I=Y; I<=X; I++)
        {
           if(I%13!=0)
           {
              SUM=SUM+I;
           }
        }
    }
    printf("%d\n", SUM);



    return 0;
}
