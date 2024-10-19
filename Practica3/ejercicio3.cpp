#include <iostream>
using namespace std;

float numero;

int main()
{

    cout << "Ingresa el numero: \n";
    cin >> numero;

    for (int i = 0; i < 11; i++) // Termina en 11 por el indice 0
    {
        cout << "El numero: '" << numero << "' x " << i << " = ";
        auto resultado = numero * i; // Tipo de dato auto porque son 2 tipos diferentes i y numero
        cout << resultado << '\n';
    }
}