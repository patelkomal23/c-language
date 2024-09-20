#include <stdio.h>

 main() {
    int N,i;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(i = N; i >= 1; i--) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
}
