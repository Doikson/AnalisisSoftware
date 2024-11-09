#include <iostream>
using namespace std;

string arreglo[5];

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa la Palabra:  " << i + 1 << ": \n";
        cin >> arreglo[i];
    }
    for (int i = 5; i != -1; i--)
    {
        cout << arreglo[i];
    }
}