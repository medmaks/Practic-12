#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Розмір масиву
    const int SIZE = 10;
    int q;

    // Виділення пам'яті під динамічний масив
    int* pArr = new int[SIZE];

    // Заповнення масиву випадковими числами та вивід
    cout << "Initial array:\n";
    for (int i = 0; i < SIZE; i++) {
        *(pArr + i) = rand() % 100; // Випадкове число від 0 до 99
        cout << *(pArr + i) << "\t";
    }
    cout << endl;

    // а) Зберігаємо 5-й елемент (індекс 4) у змінну q
    q = *(pArr + 4);
    cout << "Value of the 5th element stored in variable q: q = " << q << endl;

    // б) Заміна 5-го елемента на 1000
    *(pArr + 4) = 1000;
    cout << "5th element replaced with 1000." << endl;

    // в) Вивід масиву з використанням покажчиків
    cout << "Array after replacement:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << *(pArr + i) << "\t";
    }
    cout << endl;

    // Звільнення пам'яті
    delete[] pArr;

    return 0;
}
