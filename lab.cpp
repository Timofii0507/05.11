#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    if (*ptr1 > *ptr2) 
    {
        cout << "Найбільше число: " << *ptr1 << endl;
    }
    else if (*ptr2 > *ptr1) 
    {
        cout << "Найбільше число: " << *ptr2 << endl;
    }
    else 
    {
        cout << "Числа рівні" << endl;
    }
    return 0;
}
