#include <stdio.h>

int main() {
 int N, I, result;
    scanf("%d", &N);

    for(I=1; I<=10; I++)
    {
      result= I*N;
      printf("%d x %d = %d\n", I, N, result);
    }
    return 0;
}
