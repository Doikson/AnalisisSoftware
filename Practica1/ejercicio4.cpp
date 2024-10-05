#include <iostream>
using namespace std;

int numero;

int main()
{

    cout << "Ingresa el numero: " << endl;
    cin >> numero;

    if (numero % 2 != 0)
    {
        cout << "El numero: " << numero << " es impar";
    }
    else
    {
        cout << "El numero: " << numero << " es par";
    }
}