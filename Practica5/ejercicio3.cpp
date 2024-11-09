#include <iostream>
using namespace std;

float arreglo[5], mayorValor;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa el numero:  " << i + 1 << ": \n";
        cin >> arreglo[i];
    }

    mayorValor = arreglo[0];

    for (int i = 1; i < 5; i++)
    {
        if (arreglo[i] > mayorValor)
        {
            mayorValor = arreglo[i];
        }
    }

    cout << "El número más grande es: " << mayorValor << "\n";
}