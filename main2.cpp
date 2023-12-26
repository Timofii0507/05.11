#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int arrSize = 5;
    int numbers[arrSize];
    cout << "¬вед≥ть " << arrSize << " ц≥лих чисел:" << endl;
    for (int i = 0; i < arrSize; ++i) 
    {
        cout << "≈лемент " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "ќриг≥нальний масив:" << endl;
    for (int i = 0; i < arrSize; ++i) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    int* ptrStart = numbers;
    int* ptrEnd = numbers + arrSize - 1;
    while (ptrStart < ptrEnd) 
    {
        int temp = *ptrStart;
        *ptrStart = *ptrEnd;
        *ptrEnd = temp;
        ++ptrStart;
        --ptrEnd;
    }
    cout << "«м≥нений масив:" << endl;
    for (int i = 0; i < arrSize; ++i) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
