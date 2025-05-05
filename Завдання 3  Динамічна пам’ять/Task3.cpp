#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // Я виділив пам’ять для одного цілого числа

    *ptr = 100;          // Записав у виділену пам’ять число 100

    cout << "Value stored in dynamic memory: " << *ptr << endl;

    delete ptr;          // Звільняю пам’ять, щоб не було витоку

    return 0;
}
