#include <stdio.h>

int main() {
    int a,b;
    float c,d;
    scanf("%d %d", &a, &b);
    scanf("%f", &c);
    d=(c*b);
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", d);

    return 0;
}
