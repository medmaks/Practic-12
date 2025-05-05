#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;

    cout << "Before change: var = " << var << endl;

    *ptr = 25; // Через покажчик змінюю значення var

    cout << "After change: var = " << var << endl;

    return 0;
}
