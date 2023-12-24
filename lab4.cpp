#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num1, num2, result;
    char operation;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть операцію (+, -, *, /): ";
    cin >> operation;
    cout << "Введіть друге число: ";
    cin >> num2;
    double* ptr1 = &num1;
    double* ptr2 = &num2;
    switch (operation) 
    {
    case '+':
        result = *ptr1 + *ptr2;
        cout << "Результат: " << result << endl;
        break;
    case '-':
        result = *ptr1 - *ptr2;
        cout << "Результат: " << result << endl;
        break;
    case '*':
        result = *ptr1 * *ptr2;
        cout << "Результат: " << result << endl;
        break;
    case '/':
        if (*ptr2 != 0) 
        {
            result = *ptr1 / *ptr2;
            cout << "Результат: " << result << endl;
        }
        else 
        {
            cout << "Ділення на нуль неможливе." << endl;
        }
        break;
    default:
        cout << "Невірна операція." << endl;
        break;
    }
    return 0;
}
