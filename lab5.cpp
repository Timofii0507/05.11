#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int arrSize = 5;
    int numbers[arrSize];
    cout << "������ " << arrSize << " ����� �����:" << endl;
    for (int i = 0; i < arrSize; ++i) 
    {
        cout << "������� " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int* ptr = numbers;
    int sum = 0;
    for (int i = 0; i < arrSize; ++i) 
    {
        sum += *ptr;
        ++ptr;
    }
    cout << "���� �������� ������: " << sum << endl;
    return 0;
}
