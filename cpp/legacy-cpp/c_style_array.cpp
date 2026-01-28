#include <iostream>
using namespace std;

int arr[3] = {1, 2, 3};

int main() {
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

//Problems:No size safety, Easy buffer overflow
