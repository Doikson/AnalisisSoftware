#include <iostream>
using namespace std;

float fuerza, masa, aceleracion;

int main()
{

    cout << "Ingresa la Masa: \n";
    cin >> masa;
    cout << "Ingresa el Aceleracion: \n";
    cin >> aceleracion;

    fuerza = masa * aceleracion;

    cout << "La fuerza es: " << fuerza;
}