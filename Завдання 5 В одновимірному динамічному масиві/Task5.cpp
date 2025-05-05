#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ����� ������
    const int SIZE = 10;
    int q;

    // �������� ���'�� �� ��������� �����
    int* pArr = new int[SIZE];

    // ���������� ������ ����������� ������� �� ����
    cout << "Initial array:\n";
    for (int i = 0; i < SIZE; i++) {
        *(pArr + i) = rand() % 100; // ��������� ����� �� 0 �� 99
        cout << *(pArr + i) << "\t";
    }
    cout << endl;

    // �) �������� 5-� ������� (������ 4) � ����� q
    q = *(pArr + 4);
    cout << "Value of the 5th element stored in variable q: q = " << q << endl;

    // �) ����� 5-�� �������� �� 1000
    *(pArr + 4) = 1000;
    cout << "5th element replaced with 1000." << endl;

    // �) ���� ������ � ������������� ���������
    cout << "Array after replacement:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << *(pArr + i) << "\t";
    }
    cout << endl;

    // ��������� ���'��
    delete[] pArr;

    return 0;
}
