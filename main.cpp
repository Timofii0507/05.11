#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int arrSize = 5;
    int sourceArr[arrSize];
    int destinationArr[arrSize];
    cout << "������ " << arrSize << " ����� ����� ��� ��������� ������:" << endl;
    for (int i = 0; i < arrSize; ++i) 
    {
        cout << "������� " << i + 1 << ": ";
        cin >> sourceArr[i];
    }
    int* sourcePtr = sourceArr;
    int* destinationPtr = destinationArr;
    for (int i = 0; i < arrSize; ++i) {
        *destinationPtr = *sourcePtr;
        ++sourcePtr;
        ++destinationPtr;
    }
    cout << "����������� �����:" << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << destinationArr[i] << " ";
    }
    return 0;
}
