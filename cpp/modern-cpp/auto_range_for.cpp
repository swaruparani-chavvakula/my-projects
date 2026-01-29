#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> v = {10, 20, 30};

    // Range-based for loop
    // 'auto' automatically deduces the type as int
    for (auto x : v) {
        cout << x << endl;  // Print each element on a new line
    }

    return 0;
}
