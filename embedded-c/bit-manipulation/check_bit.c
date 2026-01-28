// Example showing how to check if a specific bit is set using bitwise operators.
#include <stdio.h>

int isBitSet(unsigned int num, int bit) {
    return (num & (1U << bit)) != 0;
}

int main(void) {
    unsigned int x = 0x04;

    if (isBitSet(x, 2))
        printf("Bit is SET\n");
    else
        printf("Bit is CLEAR\n");

    return 0;
}
