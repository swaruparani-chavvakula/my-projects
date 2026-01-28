#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Constructor\n"; }
    ~Test() { cout << "Destructor\n"; }
};

int main() {
    Test *t = new Test();
    delete t;
    return 0;
}

// problem: Error-prone in real systems
