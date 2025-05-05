#include <iostream>
using namespace std;

int main() {
    int var = 20;     // Я створив змінну var і записав туди число 20
    int* ptr;         // Оголошую покажчик ptr на змінну типу int

    ptr = &var;       // Зберігаю адресу змінної var в покажчику ptr

    cout << "Value of var = " << var << endl;               // Вивожу значення змінної var
    cout << "Address of var = " << &var << endl;            // Вивожу адресу змінної var
    cout << "Value of ptr (address of var) = " << ptr << endl;  // Вивожу значення покажчика ptr
    cout << "Value of *ptr (i.e., var) = " << *ptr << endl; // Вивожу значення, на яке вказує ptr

    return 0;
}
