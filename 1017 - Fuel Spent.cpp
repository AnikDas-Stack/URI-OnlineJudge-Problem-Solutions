#include <stdio.h>

int main() {
    double time, speed, distance, litter;
    scanf("%lf\n%lf", &time, &speed);
    distance= time*speed;
    litter= distance/12;
    printf("%.3lf\n", litter);

    return 0;
}
