#include <iostream>
using namespace std;

int main() {
    int *p = new int(10);   // manual allocation
    cout << *p << endl;
    delete p;               // manual delete
    return 0;
}

// Problems: Memory leaks, Ownership unclear, Not exception safe
