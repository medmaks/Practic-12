#include <iostream>
using namespace std;

int main() {
    int arr[3] = { 5, 10, 15 };
    int* ptr = arr;  // arr Ч це адреса першого елемента масиву

    cout << "Array elements via pointer:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "arr[" << i << "] = " << *(ptr + i) << endl;
    }

    return 0;
}
