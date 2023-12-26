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
    cout << "¬вед≥ть " << arrSize << " ц≥лих чисел дл€ вих≥дного масиву:" << endl;
    for (int i = 0; i < arrSize; ++i) 
    {
        cout << "≈лемент " << i + 1 << ": ";
        cin >> sourceArr[i];
    }
    int* sourcePtr = sourceArr;
    int* destinationPtr = destinationArr;
    for (int i = 0; i < arrSize; ++i) {
        *destinationPtr = *sourcePtr;
        ++sourcePtr;
        ++destinationPtr;
    }
    cout << "—коп≥йований масив:" << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << destinationArr[i] << " ";
    }
    return 0;
}
