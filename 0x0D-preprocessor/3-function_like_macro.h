#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int a = -5;
    int b = 10;
    printf("The absolute value of %d is %d\n", a, ABS(a));
    printf("The absolute value of %d is %d\n", b, ABS(b));
    return 0;
}
