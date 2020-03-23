#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a;
    a=N/3600;
    int b;
    b= N%3600;
    int u;
    u=b/60;
    int v;
    v=b%60;
    printf("%d:%d:%d\n", a, u, v);


    return 0;
}
