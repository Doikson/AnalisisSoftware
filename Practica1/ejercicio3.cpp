#include <iostream>
using namespace std;

int opcion;
float input1, input2, resultado;

void Menu();
void UserInput();
float Suma(float n1, float n2);
float Resta(float n1, float n2);
float Multiplicacion(float n1, float n2);
float Division(float n1, float n2);

int main()
{

    do
    {

        Menu();

        switch (opcion)
        {
        case 1:
            UserInput();
            Suma(input1, input2);
            break;
        case 2:
            UserInput();
            Resta(input1, input2);
            break;
        case 3:
            UserInput();
            Multiplicacion(input1, input2);
            break;
        case 4:
            UserInput();
            Division(input1, input2);
            break;
        case 5:
            break;
        default:
            break;
        }
    } while (opcion != 5);

    return 0;
}

void Menu()
{
    cout << "---Selecciona la Operacion a Realizar ---" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
}

void UserInput()
{
    cout << "Ingresa el Primer Termino: " << endl;
    cin >> input1;
    cout << "Ingresa el Segundo Termino: " << endl;
    cin >> input2;
}

float Suma(float n1, float n2)
{
    resultado = n1 + n2;
    cout << "El resultado de la Suma es: " << resultado << endl;
    return 0;
}

float Resta(float n1, float n2)
{
    resultado = n1 - n2;
    cout << "El resultado de la Resta es: " << resultado << endl;
    return 0;
}

float Multiplicacion(float n1, float n2)
{
    resultado = n1 * n2;
    cout << "El resultado de la Multiplicacion es: " << resultado << endl;
    return 0;
}

float Division(float n1, float n2)
{
    if (n2 != 0)
    {
        resultado = n1 / n2;
        cout << "El resultado de la Division es: " << resultado << endl;
    }
    else
    {
        cout << "---El denominador no puede ser 0---" << endl;
    }
    return 0;
}