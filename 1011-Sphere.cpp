#include <stdio.h>

int main() {
    double R, Pi, V;
    Pi=3.14159;
    scanf("%lf", &R);
    V= (4.0/3)*Pi*R*R*R;
    printf("VOLUME = %.3lf\n", V);

    return 0;
}
