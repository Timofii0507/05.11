#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    cout << "Введіть число: ";
    cin >> number;
    int* ptr = &number;
    if (*ptr > 0) 
    {
        cout << "Число є додатнім." << endl;
    }
    else if (*ptr < 0) 
    {
        cout << "Число є від'ємним." << endl;
    }
    else 
    {
        cout << "Число є нулем." << endl;
    }
    return 0;
}
