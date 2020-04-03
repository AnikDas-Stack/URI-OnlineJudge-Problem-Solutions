#include <stdio.h>

int main() {
 int tst, i;
    double amount=0.0;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        int code, quantity;
        scanf("%d %d", &code, &quantity);
        if(code==1001)
            amount=(double)amount+1.50*quantity;
        else if(code==1002)
            amount=(double)amount+2.50*quantity;
        else if(code==1003)
            amount=(double)amount+3.5*quantity;
        else if(code==1004)
           amount=(double)amount+4.5*quantity;
        else if(code==1005)
            amount=(double)amount+5.5*quantity;
    }
        printf("%.2lf\n", amount);

    return 0;
}
