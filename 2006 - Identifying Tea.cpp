#include <stdio.h>

int main() {

   int T, A, B, C, D, E;
    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    int count=0;
    if(T==A)
        count++;
    if(T==B)
        count++;
    if(T==C)
        count++;
    if(T==D)
        count++;
    if(T==E)
        count++;
    printf("%d\n", count);
    return 0;
}
