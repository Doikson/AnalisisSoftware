#include <iostream>
using namespace std;

float num1, num2, num3;

int main()
{

    cout << "Inserta el Primer Numero: \n";
    cin >> num1;

    cout << "Inserta el Segundo Numero: \n";
    cin >> num2;

    cout << "Inserta el Tercer Numero: \n";
    cin >> num3;

    if (num1 > num2 and num1 > num3)
    {
        cout << "El numero1 '" << num1 << "' es el mas grande \n";
    }
    else if (num2 > num1 and num2 > num3)
    {
        cout << "El numero2 '" << num2 << "' es el mas grande \n";
    }
    else
    {
        cout << "El numero3 '" << num3 << "' es el mas grande \n";
    }
}