#include <iostream>
#include <memory>   // For unique_ptr and shared_ptr
using namespace std;

int main() {
    // -----------------------------
    // unique_ptr: owns a single object exclusively
    // Automatically deletes the object when it goes out of scope
    // -----------------------------
    unique_ptr<int> p1 = make_unique<int>(10);  // Create unique_ptr holding value 10
    cout << *p1 << endl;                        // Dereference to print value → 10

    // -----------------------------
    // shared_ptr: reference-counted smart pointer
    // Multiple shared_ptrs can point to the same object
    // Object is deleted automatically when last shared_ptr goes out of scope
    // -----------------------------
    shared_ptr<int> p2 = make_shared<int>(20);  // Create shared_ptr holding value 20
    cout << *p2 << endl;                        // Dereference to print value → 20

    return 0;
}
