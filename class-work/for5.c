#include<stdio.h>
 main() {
    int n, total = 0, i;
    printf("Enter Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        total = total+i;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, total);

}
