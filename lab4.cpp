#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num1, num2, result;
    char operation;
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ �������� (+, -, *, /): ";
    cin >> operation;
    cout << "������ ����� �����: ";
    cin >> num2;
    double* ptr1 = &num1;
    double* ptr2 = &num2;
    switch (operation) 
    {
    case '+':
        result = *ptr1 + *ptr2;
        cout << "���������: " << result << endl;
        break;
    case '-':
        result = *ptr1 - *ptr2;
        cout << "���������: " << result << endl;
        break;
    case '*':
        result = *ptr1 * *ptr2;
        cout << "���������: " << result << endl;
        break;
    case '/':
        if (*ptr2 != 0) 
        {
            result = *ptr1 / *ptr2;
            cout << "���������: " << result << endl;
        }
        else 
        {
            cout << "ĳ����� �� ���� ���������." << endl;
        }
        break;
    default:
        cout << "������ ��������." << endl;
        break;
    }
    return 0;
}
