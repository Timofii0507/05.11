#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int arraySize = 5;
    int sourceArray[arraySize];
    int destinationArray[arraySize];
    for (int i = 0; i < arraySize; ++i) 
    {
        cout << "Елемент " << i + 1 << ": ";
        cin >> sourceArray[i];
    }
    int* sourcePtr = sourceArray;
    int* destinationPtr = destinationArray + arraySize - 1;
    for (int i = 0; i < arraySize; ++i) 
    {
        *destinationPtr = *sourcePtr;
        ++sourcePtr;
        --destinationPtr;
    }
    for (int i = 0; i < arraySize; ++i) 
    {
        cout << destinationArray[i] << " ";
    }
    return 0;
}