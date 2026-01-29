#include <iostream>
#include <algorithm>  // For count_if
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> v = {1, 2, 3, 4};

    // count_if counts elements that satisfy a condition
    // Lambda function [](int x) { return x % 2 == 0; }
    // returns true for even numbers
    int count = count_if(
        v.begin(),      // start iterator
        v.end(),        // end iterator
        [](int x) { return x % 2 == 0; }  // condition (even check)
    );

    // Print the result
    cout << "Even count: " << count << endl;

    return 0;
}
