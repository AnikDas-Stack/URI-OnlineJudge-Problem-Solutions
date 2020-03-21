#include <stdio.h>

int main() {
    int code[2], unit[2];
    double price[2], total;
    scanf("%d %d %lf", &code[0], &unit[0], &price[0]);
    scanf("%d %d %lf", &code[1], &unit[1], &price[1]);
    total= (unit[0]*price[0])+(unit[1]*price[1]);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
