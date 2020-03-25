#include <stdio.h>

int main() {

    int N, I, R;
    scanf("%d", &N);

    if(5<N && N<2000)
    {
        for(I=1; I<=N; I++)
        {
            if(I%2==0)
            {
                R=I*I;
                printf("%d^2 = %d\n", I, R);
            }
        }
    }

    return 0;
}
