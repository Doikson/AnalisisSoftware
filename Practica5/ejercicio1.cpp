#include <iostream>
using namespace std;

float arreglo[5], sumatoria;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa el numero:  " << i + 1 << ": \n";
        cin >> arreglo[i];
    }
    sumatoria = arreglo[0] + arreglo[1] + arreglo[2] + arreglo[3] + arreglo[4];

    cout <<"La sumatoria de todos los numeros es: " <<sumatoria << "\n";
}