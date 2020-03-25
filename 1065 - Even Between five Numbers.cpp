#include <stdio.h>

int main() {

    int count=0,n=0;
    int a;
    while(n!=5){
        scanf("%d",&a);
        if(a%2==0){
            count++;
        }
        n++;
    }
    printf("%d valores pares\n",count);

    return 0;
}
