#include <iostream>
using namespace std;

float calificacion1, calificacion2, calificacion3, calificacion4, calificacion5, promedio;
float total = 5;
int main()
{

    cout << "Ingresa la calificacion 1:\n";
    cin >> calificacion1;

    cout << "Ingresa la calificacion 2:\n";
    cin >> calificacion2;

    cout << "Ingresa la calificacion 3:\n";
    cin >> calificacion3;

    cout << "Ingresa la calificacion 4:\n";
    cin >> calificacion4;

    cout << "Ingresa la calificacion 5:\n";
    cin >> calificacion5;

    promedio = calificacion1 + calificacion2 + calificacion3 + calificacion4 + calificacion5;
    promedio = promedio / total;

    if (promedio > 7)
    {
        cout << "El promedio es Aprobatorio \n";
    }
    else
    {
        cout << "El promedio es REPROBATORIO \n";
    }
}