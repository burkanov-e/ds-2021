#include <stdio.h>

int main(void) {
    int x;
    int y;
    int *p;

    x = 1;
    p = &x;

    printf("x = %d\n", x);
    printf("x = %d\n", *p);
    printf("address of x = %p\n", p);

    *p = 2;
    printf("x = %d\n", x);
    printf("x = %d\n", *p);

    y = *p * *p;
    printf("y = %d\n", y);

    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(int *));
}