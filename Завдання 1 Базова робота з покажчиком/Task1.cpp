#include <iostream>
using namespace std;

int main() {
    int var = 20;     // � ������� ����� var � ������� ���� ����� 20
    int* ptr;         // �������� �������� ptr �� ����� ���� int

    ptr = &var;       // ������� ������ ����� var � ��������� ptr

    cout << "Value of var = " << var << endl;               // ������ �������� ����� var
    cout << "Address of var = " << &var << endl;            // ������ ������ ����� var
    cout << "Value of ptr (address of var) = " << ptr << endl;  // ������ �������� ��������� ptr
    cout << "Value of *ptr (i.e., var) = " << *ptr << endl; // ������ ��������, �� ��� ����� ptr

    return 0;
}
