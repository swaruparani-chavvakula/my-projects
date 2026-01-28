#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 20;

    // -----------------------------
    // Pointer to constant data
    // -----------------------------
    const int *p1 = &a;     
    // p1 points to an int that should not be modified through p1
    // You **cannot do**: *p1 = 15;  // ❌ ERROR: data is const
    // You **can do**: p1 = &b;      // ✅ OK: pointer itself is not const
    p1 = &b;  // OK, changing pointer to point to b

    // -----------------------------
    // Constant pointer to data
    // -----------------------------
    int *const p2 = &a;     
    // p2 is a pointer that **cannot point anywhere else** (pointer is const)
    // You **cannot do**: p2 = &b;   // ❌ ERROR: pointer is const
    // You **can do**: *p2 = 15;     // ✅ OK: can modify data through p2
    *p2 = 15;  // OK, modifying value of 'a' through p2

    // -----------------------------
    // Summary:
    // p1 = pointer to const data → can change pointer, cannot change data
    // p2 = const pointer → cannot change pointer, can change data
    // -----------------------------

    return 0;
}
