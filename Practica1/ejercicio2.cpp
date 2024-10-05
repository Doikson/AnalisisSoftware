#include <iostream>
using namespace std;

float num1, num2, num3;

int main()
{

    cout << "Ingresa el num1: \n";
    cin >> num1;
    cout << "Ingresa el num2: \n";
    cin >> num2;
    cout << "Ingresa el num3: \n";
    cin >> num3;

    float resultado = num1 - num2 - num3;

    cout << "El resultado de restar esos 3 numeros es: " << resultado;
}