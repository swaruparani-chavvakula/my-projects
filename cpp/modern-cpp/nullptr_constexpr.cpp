#include <iostream>
using namespace std;

// constexpr function: can be evaluated at compile time if argument is constant
constexpr int square(int x) {
    return x * x;
}

int main() {
    int *p = nullptr;   // nullptr is a type-safe null pointer (preferred over NULL)

    // Calls constexpr function; result may be computed at compile time
    cout << square(5);

    return 0;
}
