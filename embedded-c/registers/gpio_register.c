// Access registers using structures
#include <stdint.h>

// Define a structure representing GPIO registers
typedef struct {
    volatile uint32_t MODER; // Mode register: sets pin as input/output/alternate/analog
    volatile uint32_t ODR;   // Output Data Register: sets pin HIGH or LOW
} GPIO_TypeDef;

// Define a pointer to GPIOA hardware registers at memory address 0x40020000
#define GPIOA ((GPIO_TypeDef *)0x40020000)

int main(void) {
    // -----------------------------
    // Step 1: Configure pin 5 as output
    // Each pin uses 2 bits in MODER:
    // 00 = input, 01 = output, 10 = alternate, 11 = analog
    // Pin 5 corresponds to bits 10 and 11 in MODER
    // Setting bit 10 to 1 makes pin 5 an output
    // -----------------------------
    GPIOA->MODER |= (1U << 10);

    // -----------------------------
    // Step 2: Set pin 5 HIGH
    // ODR bit 5 corresponds to pin 5
    // Setting bit 5 to 1 drives the pin HIGH (e.g., turns on LED)
    // -----------------------------
    GPIOA->ODR |= (1U << 5);

    // -----------------------------
    // Step 3: Keep the program running indefinitely
    // Embedded programs usually do not exit
    // -----------------------------
    while (1);

    return 0; // never reached
}
