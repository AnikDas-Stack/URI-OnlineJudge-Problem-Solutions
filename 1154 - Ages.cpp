#include <stdio.h>

int main() {

    int x, count=0, sum=0;
    double average;

    for(; ;)
    {
        scanf("%d", &x);
        if(x<0)
            break;
        else
        {
            sum=sum+x;
            count++;
        }
    }
    average= (double) sum/count;
    printf("%.2lf\n", average);

    return 0;
}
