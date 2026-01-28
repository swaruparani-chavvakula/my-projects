// set/clear,toggle bits in a Register
#include <stdio.h>

#define SET_BIT(n, bit_pos)     ((n) |= (1U << (bit_pos)))
#define CLEAR_BIT(n, bit_pos)   ((n) &= ~(1U << (bit_pos)))
#define TOGGLE_BIT(n, bit_pos)  ((n) ^= (1U << (bit_pos)))

int main(void) {
    unsigned int n = 0x00;

    SET_BIT(n, 2);      // Set bit_pos 2
    CLEAR_BIT(n, 2);    // Clear bit_pos 2
    TOGGLE_BIT(n, 1);   // Toggle bit_pos 1

    printf("register: 0x%X\n", n);
    return 0;
}
