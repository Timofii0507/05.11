#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int firstNum, secondNum;
    cout << "������ ����� �����: ";
    cin >> firstNum;
    cout << "������ ����� �����: ";
    cin >> secondNum;
    int* ptr1 = &firstNum;
    int* ptr2 = &secondNum;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "ϳ��� �����:" << endl;
    cout << "����� �����: " << *ptr1 << endl;
    cout << "����� �����: " << *ptr2 << endl;
    return 0;
}
