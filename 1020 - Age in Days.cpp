#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a;
    a=n/365;
    printf("%d ano(s)\n", a);
    int x;
    x=n%365;
    int b;
    b=x/30;
    printf("%d mes(es)\n", b);
    int y;
    y=x%30;
    printf("%d dia(s)\n", y);




    return 0;
}
