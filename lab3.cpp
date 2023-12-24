#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int firstNum, secondNum;
    cout << "Введіть перше число: ";
    cin >> firstNum;
    cout << "Введіть друге число: ";
    cin >> secondNum;
    int* ptr1 = &firstNum;
    int* ptr2 = &secondNum;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "Після обміну:" << endl;
    cout << "Перше число: " << *ptr1 << endl;
    cout << "Друге число: " << *ptr2 << endl;
    return 0;
}
