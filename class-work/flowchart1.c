#include <stdio.h>
 main() {
    int a, b, c, d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);
    if (a>b) {
        if (a>c) {
            if (a>d) {
                printf("Maximum number is: %d", a);
            } else {
                printf("Maximum number is: %d", d);
            }
        } else {
            if (c>d) {
                printf("Maximum number is: %d", c);
            } else {
                printf("Maximum number is: %d", d);
            }
        }
    } else {
        if (b>c) {
            if (b>d) {
                printf("Maximum number is: %d", b);
            } else {
                printf("Maximum number is: %d", d);
            }
        } else {
            if (c>d) {
                printf("Maximum number is: %d", c);
            } else {
                printf("Maximum number is: %d", d);
            }
        }
    }
}
