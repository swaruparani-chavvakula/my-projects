#include <iostream>
#include <array>    // For std::array
#include <vector>   // For std::vector
using namespace std;

int main() {
    
    // std::array: fixed-size array, size known at compile time
    array<int, 3> a = {1, 2, 3};

    // std::vector: dynamic array, size can change at runtime
    vector<int> v = {4, 5, 6};

    // Range-based for loop to print std::array
    for (int x : a) cout << x << " ";  // Output: 1 2 3
    cout << endl;

    // Range-based for loop to print std::vector
    for (int x : v) cout << x << " ";  // Output: 4 5 6

    return 0;
}
