#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    cout << "������ �����: ";
    cin >> number;
    int* ptr = &number;
    if (*ptr > 0) 
    {
        cout << "����� � �������." << endl;
    }
    else if (*ptr < 0) 
    {
        cout << "����� � ��'�����." << endl;
    }
    else 
    {
        cout << "����� � �����." << endl;
    }
    return 0;
}
