#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // � ������ ������ ��� ������ ������ �����

    *ptr = 100;          // ������� � ������� ������ ����� 100

    cout << "Value stored in dynamic memory: " << *ptr << endl;

    delete ptr;          // ������� ������, ��� �� ���� ������

    return 0;
}
