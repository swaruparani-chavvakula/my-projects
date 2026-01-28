//Counts the number of set bits in a register value using an efficient bit-clearing technique commonly used in embedded C.
#include <stdio.h>

int countSetBits(unsigned int value) {
    int count = 0;
    while (value) {
      value= value & (value-1); // removes lowest set bit(clears one set bit)
        count++;
    }
    return count;
}

int main(void) {
    unsigned int num = 15;
    printf("Set bits: %d\n", countSetBits(num));
    return 0;
}
