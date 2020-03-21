#include <stdio.h>

int main() {
    double A, B, C, D;
    scanf("%lf %lf %lf", &A, &B, &C);
    D=(((A*2)+(B*3)+(C*5))/(2+3+5));
    printf("MEDIA = %.1lf\n", D);

    return 0;
}
