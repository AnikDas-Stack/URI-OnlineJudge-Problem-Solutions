#include <stdio.h>

int main() {

    int x, i=2;
    double S=1, res;

    for(x=3; x<=39; x+=2)
    {
      res= (double)x/i;
      S= S+res;
      i*=2;

    }
    printf("%.2lf\n", S);

    return 0;
}
