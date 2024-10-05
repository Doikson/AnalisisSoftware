#include <iostream>
using namespace std;

float num1, num2, resultado;

int main()
{

    cout << "Inserta el Primer Numero: \n";
    cin >> num1;

    cout << "Inserta el Segundo Numero: \n";
    cin >> num2;

    if (num1 == num2)
    {
        resultado = num1*num2;
        cout << "Se multiplican los Numeros y el Resultado es: " << resultado;
    }
    else
    {
        resultado = num1/num2;
        cout << "Se Dividen los Numeros y el Resultado es: " << resultado;
    }
}