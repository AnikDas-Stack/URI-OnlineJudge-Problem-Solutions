\#include <stdio.h>

int main() {
  int x=1, i;
    double S=0.0, res;
    for(i=1; i<=100; i++)
    {
       res= (double)x/i;
       S= S+res;
    }
    printf("%.2lf\n", S);


    return 0;
}
