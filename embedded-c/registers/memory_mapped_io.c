//direct manipulation of a memory-mapped GPIO output data register to set a specific GPIO pin using register-level programming in embedded C.
#include <stdint.h>

#define GPIO_BASE  0x40020000U
#define GPIO_ODR   (*(volatile uint32_t *)(GPIO_BASE + 0x14))

int main(void) {
    GPIO_ODR |= (1U << 5);   // Set GPIO pin 5
    while (1); // Infinite loop to keep the program running
}
