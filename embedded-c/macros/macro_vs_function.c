//Difference between macro and function

#include <stdio.h>

#define SQUARE_MACRO(x) ((x) * (x))

int square_func(int x) {
    return x * x;
}

int main(void) {
    printf("%d\n", SQUARE_MACRO(4));
    printf("%d\n", square_func(4));
    return 0;
}
