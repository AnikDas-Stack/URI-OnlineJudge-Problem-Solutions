#include <stdio.h>

int main() {
     double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double triangle;
    triangle= (0.5*A*C);
    double circle, pi;
    pi= 3.14159;
    circle= (pi*C*C);
    double trapezium;
    trapezium= (((A+B)/2)*C);
    double square;
    square= (B*B);
    double rectangle;
    rectangle= (A*B);
    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

     return 0;
}
